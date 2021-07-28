# WebSockets

- Additional Readings
	- [ ] [Cross-site WebSocket hijacking](https://portswigger.net/web-security/websockets/cross-site-websocket-hijacking)
	- [ ] [Cross-Site WebSocket Hijacking (CSWSH)](https://christian-schneider.net/CrossSiteWebSocketHijacking.html)
	- [x] [Short Polling vs Long Polling vs Web Sockets](https://anuradha.hashnode.dev/short-polling-vs-long-polling-vs-web-sockets)

- HTTP 1.0
	- open/close tcp connection every request/response

- HTTP 1.1
	- connection keep alive until we say it to close

- WebSockets
	- Websocket handshake (HTTP Request)
		1. Client: GET 1.1 Upgrade (Will never work with HTTP 1.0)
			- `Sec-WebSocket-Key` - Server will take for doing some seeding and hashing, and then send back a new `Sec-WebSocket-Accept` 
				- It is sent from the client to the server to provide part of information used by the server to prove that it received a valid WebSocket opening handshake.
				- This helps ensure that the server does not accept connections from non-WebSocket clients (e.g., HTTP clients) that are being abused to send data to unsuspecting WebSocket servers.
		2. Server: 101 - Switching Protocols
		- Client and Server can start connection (bi-directional)
	- ws:// or wss://
		- `ws` connects on `http`
		- `wss` connects on `https only`
			- You must have SSL activated
	- Use cases
		- Chatting
		- Live Feed
		- Multiplayer gaming
		- Showing client progress/logging
	- Pros
		- Full-duplex (no polling)
		- HTTP compatible
		- Firewall friendly (standard)
	- Cons
		- Proxying is tricky
		- L7 L/B challenging (timeouts)
		- Stateful, difficult to horizontally scale
			- Can persist a connection id on a database (maintain the state)
			- If the server die, it can read back all the connection from the database

- Do you have to use WebSockets?
	- NO! Rule of thumb - do you absolutely need bidirectional communication?
	- Other ways
		- Long polling
			- For websocket, the server doesn't know that the client is connected
		- EventSource