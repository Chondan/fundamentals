# Pub/Sub

-  Request Response
	- Example:
		- Browsing
		- Fetch or XMLHttpRequest
		- SQL query
	- Example Scenario: (Uploading a youtube vide Compress video) -> format video -> Notify subscribers
		- Upload breaks down the video into small chunks and uploads each one
		- Once all successfully uploaded send a whole video to the compress service
		- Onde vide compressed, the compress service sends to the format service and notifications service
	- Where it breaks?
		- If you are only using pure request-response, The client will be waiting until all of that stuff is done and if the connection is broken or any failure happens you lose.
		- Plus let's assume You want to also add a new feature where the video will need to be checked for copyrighted material. So, the compress service now need to make a request to the copyright service and make sure all of that requests return successfully.
	- Pros
		- Elegant and Simple
		- Stateless (HTTP)
		- Scalable
		- Sync or Async (service and client)
	- Cons
		- Bad for multiple receivers
		- High Coupling
		- Client/Server have to be running
		- Chaining, circuit breaking

- Pub/Sub
	- Publish subscribe or pubsub for short is an architecture model where a publisher posts a message to a topic (usually in the form of a queue) and clients optionally can subscribe to the topic and get notified when a new message is posted.
	- Example Scenario: (Uploading a youtube vide Compress video)
		- Upload breaks down the video into small chunks and uploads each one
		- Once all successfully uploaded send a whole vide to message queue or topic
		- The compress service subscribe to the topic. The new video will get received by the compress service, compressess the vide and publish it back to the topic or queue as a compressed.
		- The notification and copyright service subscribes to the topic.
	- Tools
		- Redis/Kafka/RabbitMQ
	- Pros
		- Scales w/ multiple receivers
		- Greate for microservices
		- Loose Coupling
			- Scale and modify easily
		- Works while clients not running
	- Cons
		- Message delivery issues (Two generals problem)
			1. How do you know that the queue (message) has been published?
			2. Subscriber - How do you know that a subscriber actually got and process the content?
		- Complexity
		- Network saturation

https://www.youtube.com/watch?v=DXTHb9TqJOs&ab_channel=HusseinNasser

