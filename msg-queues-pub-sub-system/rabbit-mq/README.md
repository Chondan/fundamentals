# RabbitMQ

- Additional Readings
	- [x] [RabbitMQ-Connection vs Channel](https://faun.pub/rabbitmq-connection-vs-channel-aed1188a7f3a)
		- Channels help us to perform operations in parallel.

- Components
	- Publisher <---> RabbitMQ <---> Consumer	
	- RabbitMQ Server
		- listen on port 5672
	- Publisher/Consumer
		- Establish tcp connection with rabbitMq server

- running rabbitMq server using docker
	- `docker run --name rabbitmq -p 5672:5672 rabbbitmq`

- Thoughts on RabbitMQ
	- Too many abstractions
	- Complex
	- Push model
		- Consumer never ask to get messages