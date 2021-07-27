# Load Balancing

- Addtional Readings
	- [x] [TCP vs HTTP(s) Load Balancing](https://medium.com/martinomburajr/distributed-computing-tcp-vs-http-s-load-balancing-7b3e9efc6167)
	- [x] [The Four Essential Sections of an HAProxy Configuration](https://www.haproxy.com/blog/the-four-essential-sections-of-an-haproxy-configuration/)

- Layer 4 (TCP) Load Balancer
	- Pros
		- Simple load balancing
		- Efficient (no data lookup)
		- More secure
		- One TCP connection
		- Uses NAT
	- Cons
		- No smart load balancing
		- NA microservices
		- Sticky per segment
		- No caching

- Layer 7 (HTTP) Load Balancer
	- Pros
		- Smart load balancing
		- Caching
		- Great for microservices
	- Cons
		- Expensive (looks at data)
		- Decrypts (terminate TLS)
		- Two TCP Connections
		- Must share TLS certificate

- Setup HAProxy
	- brew install haproxy
	- create config file
	- run command `haproxy -f <config file>`
