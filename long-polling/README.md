# Long polling

> Long polling is the simples way of having persistent connection with server, that doesn't use any specific protocol like WebSocket or Server Side Events.

- Additional Readings
    - [x] [Long polling](https://javascript.info/long-polling)

- Flow
    1. A request is sent to the server
    2. The server doesn't close the connection unit it has a message to send.
    3. When a message appears - the server responds to the request with it.
    4. The browser makes a new request immediately.

- Area of usage
    - Long polling works great in situations when messages are rare.