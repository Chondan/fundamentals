# TCP vs UDP

- Additional Readings
	- [TCP vs UDP: What's the Difference?](https://www.lifesize.com/en/blog/tcp-vs-udp/) 

- Layer 4 Transport (OSI model)

- TCP (Transmission Control Protocol)
	- Pros
		- Acknowledgment
		- Guaranteed delivery
		- Connection based
		- Congesting control - Control the traffic
		- Ordered packets
		- Retransmission of lost packets is possible
		- TCP is instinctively reliable, its feedback mechanism also result in a larger overhead, translating to greater use of the available bandwidth on your network
	- Cons
		- Larger packets
		- More bandwidth
		- Slower than UDP 
		- Stateful
		- Server memory (DOS)
	- Use cases
		- It is the perfect protocol for transfering information like still images, data files, and web pages
		- HTTPS, HTTP, SMTP (Simple Mail Transer Protocol), POP, FTP, etc

- UDP (User Datagram Protocol)
	- Pros
		- Smaller packets - No more headers like TCP to add to it
		- Less bandwidth
		- Faster than TCP 
		- Stateless
	- Cons
		- No Acknowledgment
		- No Guaranteed delivery
		- Connectionless
			- Client and Server doesn't know each other
			- There is no overhead for opening a connection, maintaining a connection, or terminating a connection
			- data is continuously sent to the recipient, whether or not they receive it
		- No Congestion control 
		- No Ordered packets
		- No retransimission of lost packets
		- Security - Because it's connectionless
	- Use cases
		- UDP isn't ideal for sending an email, viewing a webpage, or downloading a file, it is largely preferred for real-time communications like broadcast or multitask network transmission
		- Video conferencing, streaming, DNS, VoIP

