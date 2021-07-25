# Symmetric vs Asymmetric Encryption

- Symmetric Encryption
	- Example
		- AES (Rijndael)
		- Twofish
		- Serpent
		- DES
	- Pros
		- Fast
		- Efficient for large data
	- Cons
		- Hard to transpot shared key

- Asymmetric Encryption
	- Can be used to initiate the first connection 
		- to share symmetric share key at first time (the middle man cannot stole the key)
	- Example
		- RSA (Rivest-Shamir-Adleman)
		- Diffie-Hellman
		- ElGamal
	- Pros
		- Public key can be shared
		- Designed for small data (ssh)
	- Cons
		- Slow
		- Inefficient for large data