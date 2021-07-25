const express = require('express');
const app = express();
const {isPrime} = require('./isprime');

app.get('/isprime', async (req, res) => {
	const {number} = req.query;
	const jsonReponse = isPrime(number);
	res.send(jsonReponse);
});

app.listen(3000, () => console.log('Server started: Listening on port 3000'));

