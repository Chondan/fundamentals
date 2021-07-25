# HTTP

HTTP is a protocol for transferring web pages, text media, binary files and much more. It stands for hyper text transfer protocol and it is what the internet pretty much runs on.

- Additional Readings
	- [ ] [HTTP/1.1 vs HTTP/2: What's the Difference?](https://www.digitalocean.com/community/tutorials/http-1-1-vs-http-2-what-s-the-difference)

- Client/Server
	- (Client) Browser, python or javascript app, or any app that makes HTTP request
	- (Server) HTTP Web Server, e.g. IIS, Apache Tomcat, NodeJS, Python Tornado

- HTTP Request
	- URL
	- Method type
	- Headers
	- Body

- HTTP Response
	- Status Code
	- Headers
	- Body

- How HTTP works?

- HTTP 1.0
	- New TCP connection with each request
	- Slow
	- Buffering

- HTTP 1.1
	- Persisted TCP Connection
	- Low Latency
	- Streaming with Chunked transfer
	- Pipelining (disabled by default)

- HTTP/2
	- Compression
	- Multiplexing
	- Server Push
	- SPDY
	- secure by default
	- Protocol Negotiation during TLS (NPN/ALPN)

- HTTP/2 over QUIC (HTTP/3)
	- Replacs TCP with QUIC (UPD with Congestion control)
	- All HTTP/2 features
