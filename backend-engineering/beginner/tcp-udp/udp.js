const dgram = require('dgram'); // https://nodejs.org/api/dgram.html
const socket = dgram.createSocket('udp4');dgram

// Using command `echo "hi" | nc -w1 -u 127.0.0.1 3000` to connect with the server

socket.on('message', (msg, rinfo) => {
	const {address, port} = rinfo;
	console.log(`Server got: ${msg} from ${address}:${port}`);
});

socket.on('listening', () => {
	const {address, port} = socket.address();
	console.log(`erver listening ${address}:${port}`);
});

socket.bind(3000);