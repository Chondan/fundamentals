# Web Severs

- Additional Readings
	- [ ] Single thread vs Multi thread server
	- [ ] Blocking IO and Non-blocking IO
	- [ ] POSIX thread

- What is a Web Server?
	- Software that serves web content
	- Uses the HTTP protocol
	- Static and Dynamic content
	- Used to host web pages, blogs and build APIs

- How Web Server work?
	- Process starts and listen to a port (usually 80), a client make a request to the web server, this establishes a TCP connection client and server if its HTTPS it does TLS, then finally the GET request get sent.
	- Now different implementation of webservers shine here, some servers use the same process to execute the request on the main thread. Which means the server can't accept any more requests until that is done this is referee to as Blocking single-threaded HTTP server.
	- Other web servers implement this different and accepts new requests all the time and start new thread of execution

- Blocking Single-Threaded Web Server

- Examples
	- OTS Web servers (httpd, IIS, lighttpd, tomcat, http-server)
	- Write your own! (nodejs, pythong tornado)