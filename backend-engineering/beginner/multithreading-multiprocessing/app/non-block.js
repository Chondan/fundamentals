const express = require('express');
const {fork} = require('child_process');
const app = express();

// Using 'top' command to see the running process

app.get('/isprime', async (req, res) => {
	const {number} = req.query;

	const childProcess = fork('./isprime.js');
	childProcess.send({number});
	childProcess.on('message', message => res.send(message));
});

app.listen(3000, () => console.log('Server started: Listening on port 3000'));

