# Proxy vs Reverse Proxy Server

- What is a Proxy?
	- The server doesn't know the client
	- A proxy server, sometimes referred to as a forward proxy, is a server that routes traffice between client(s) and another system, usually external to the network.
	- By doing so, it can regulate traffic according to preset policies, convert and mask client IP addresses, enforce security protocols, and block unknown traffic.

- Proxy use cases
	- Caching
	- Anonymity
	- Logging (statistical data)
	- Block Sites
	- Microservices

- What is a Reverse Proxy?
	- The client doesn't know the server (final destination)

- Reverse Proxy use cases
	- Caching
	- Load Balancing
	- Ingress
	- Canary Deployment
		- A canary deployment is a deployment strategy that releases an application or service incrementally to a subset of users. All infrastructure in a target environment is updated in small phases (e.g: 2%, 25%, 75%, 100%)
	- Microservices

- Most common questions
	- Can Proxy & Reverse Proxy used in the same time?
		- Yes, this is called a  `Service Mesh`.
	- Can I use Proxy instead of VPN for annomity?
		- Yes, But basically vpn is more secure.
	- Is proxy just for HTTP traffic
		- No, There are many types of proxy