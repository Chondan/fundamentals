const http = require('http');
const url = require('url');
const querystring = require('querystring');
const static = require('node-static');

// Allow cors
function allowCORS(req, res) {
    res.setHeader('Access-Control-Allow-Origin', '*');
	res.setHeader('Access-Control-Request-Method', '*');
	res.setHeader('Access-Control-Allow-Methods', 'OPTIONS, GET');
	res.setHeader('Access-Control-Allow-Headers', '*');
}

// To Server static files
const fileServer = new static.Server('.');

let subscribers = {};
function onSubscribe(req, res) {
    const id = Math.random();

    res.setHeader('Content-Type', 'text/plain;charset=utf-8');
    res.setHeader('Cache-Control', 'no-cache, must-revalidate');
    allowCORS(req, res);

    subscribers[id] = res;

    // Unsubscribe when client lost the connection
    req.on('close', function() {
        delete subscribers[id];
    });
}

function publish(message) {
    for (const id in subscribers) {
        const res = subscribers[id];
        res.end(message);
    }

    subscribers = {};
}

function accept(req, res) {
    const urlParsed = url.parse(req.url, true);

    // new clients wants message
    if (urlParsed.pathname == '/subscribe') {
        onSubscribe(req, res);
        return;
    }

    // sending a message
    if (urlParsed.pathname == '/publish' && req.method == 'POST') {
        // accept POST
        req.setEncoding('utf8');
        let message = '';
        req
            .on('data', function(chunk) {
                message += chunk;
            })
            .on('end', function() {
                publish(message); // publish it to everyone
                allowCORS(req, res);
                res.end('ok');
            });
        return;
    }

    // the rest is static
    fileServer.serve(req, res);
}

function close() {
    for (const id in subscribers) {
        const res = subscribers[id];
        res.end();
    }
}

// --------------------------
if (require.main) {
    http.createServer(accept).listen(3000, () => console.log('Server started: Listening on port 3000'));
} else {
    exports.accept = accept;

    if (process.send) {
        process.on('message', msg => {
            if (msg === 'shutdown') {
                close();
            }
        });
    }

    process.on('SIGINT', close);
}