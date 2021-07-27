const experss = require('express');
const app = experss();

const port = process.env.PORT || 3000;

app.get('/*', (req, res) => {
	res.end(`Served from port ${port}`);
});

app.listen(port, () => console.log(`Server started: Listening on port ${port}`));