# Network Address Translation

> NAT network address translation is a process of mapping an IP address or IP port pair to another IP address or IP:port.

The idea of NAT is to allow multiple devices to access the Internet through a single public address.

- NAT Applications
	- Private to Public IP translation
		- NAT was originally designed to solve the ipv4 limited IP addresses.
			- So we don't run out ipv4
	- Port forwarding
		- Instead of having root access to listen to port 80
	- L4 Load Balancing
		- Fast load balancing

- NAT Types:
	1. Static NAT - a single unregistered (Private) IP address is mapped with a legally registered (Public) IP address i.e one-to-one mapping between local and global address.
		- This is generally used for Web hosting.
		- These are not used in organisations as there are many devices who will need Internet access and to provide Internet access, the public IP address is needed.
	2. Dynamic NAT - an unregistered IP address is translated into a registered (Public) IP address from a pool of public IP address.
	3. Port Address Translation (PAT) - this is also know as NAT overload.
		- Many local (private) IP addresss can be translated to a single registered IP address. Port numbers are used to distinguish the traffice i.e., which traffic belongs to which IP address.
![NAT Types](https://ipcisco.com/wp-content/uploads/2018/10/nat-types-www.ipcisco.com_.jpg)

-  Additional Readings
	- [x][Network Address Translation (NAT)](https://www.geeksforgeeks.org/network-address-translation-nat/)
	- [x][NAT (Network Address Translation)](https://ipcisco.com/lesson/nat-network-address-translation/)