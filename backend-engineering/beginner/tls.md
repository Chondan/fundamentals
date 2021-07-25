# Transport Layer Security, TLS 1.2 and 1.3

- Additional Readings
	- [x] [What happens in a TLS handshake? | SSL handshake](https://www.cloudflare.com/learning/ssl/what-happens-in-a-tls-handshake/)
	- [ ] [Diffie-Hellman Key Exchange Agreement/Algorithm(https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DxSUMEer6J_E&psig=AOvVaw3eHDWI4-98fhkwoAiAvzGl&ust=1627252059535000&source=images&cd=vfe&ved=0CAwQjhxqFwoTCLCZg7rg_PECFQAAAAAdAAAAABAU)

- Vanilla HTTP

- HTTPS
	- Having a Handshake to exchange a shared symmetric key which will be used to communication
	- Works by negotiating a symmetric key so they can both secure message.
	- Connection through port 443

- TLS 1.2
	- Give more options
	- The original TLS handshake involves 4 roundtrips. 
		- A client hello which the client includes which encryption algorithms it supports (Both symmetric and asymmetric). 
		- The server receives the request then replies back with the server certificate which includes the server public key and also the encryptions that they will change to.
		- The client receives the server hello, generates the premaster key, encrypts it with the server's public key then send it over.
		- The server decrypts the maessage, gets the premaster generates the symmetric key finally tells the client that we are good to go.

- Diffie-Hellman
	- privateA + public + privateB = private share key
![Diffie-Hellman](https://i.ytimg.com/vi/xSUMEer6J_E/maxresdefault.jpg)

- TLS 1.3
	- TLS 1.3 involes much shorter and much more communicating using only diffie hellman as key exchange and just two round trips.