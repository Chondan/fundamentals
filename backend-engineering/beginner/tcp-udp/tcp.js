const net = require('net'); // https://nodejs.org/api/net.html

// Using command `telnet 127.0.0.1 3000` to connect with the server

const server = net.createServer(socket => {
	socket.write("Hello World");

	// Server got data from client
	socket.on("data", data => {
		console.log(data.toString());
	});
});

server.listen(3000, () => console.log('Server started: Listening at port 3000'));