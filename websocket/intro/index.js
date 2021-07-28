const http = require('http');
const WebSocketServer = require('websocket').server;
let connection;

/* 
Example for client connection
1. go to browser console -> `let ws = new WebSocket('ws://localhost:3000')`
2. `ws.onmessage => message => { do something with message }`
3. `ws.send(msg)`
*/

// Using for handshake
const httpServer = http.createServer((req, res) => {
	console.log('We have received a request');
});

const websocket = new WebSocketServer({
	'httpServer': httpServer
});

websocket.on('request', request => {
	connection = request.accept(null, request.origin);
	console.log('connection accepted');

	// Close event
	connection.on('close', e => console.log('Closed!!'));

	// Receive message event
	connection.on('message', message => {
		console.log(`Received message ${message.utf8Data}`);
	});

	sendEvery5Seconds();
});

httpServer.listen(3000, () => console.log('Server started: Listening on port 3000'));

function sendEvery5Seconds() {
	connection.send(`Message ${Math.random()}`);
	setTimeout(sendEvery5Seconds, 5000);
}