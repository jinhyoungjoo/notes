# HTTP (HyperText Transfer Protocol)

- OSI Layer 7 (Application Layer), Port 80 (TCP)
- HTTP defines how Web clients request Web pages from Web servers and how servers transfer Web pages to clients.

## Stateless Protocol
- Server sends requested files to clients without storing any state information about the client.

## Non-persistent and Persistent Connections
- Non-persistent TCP Connection
    - Each request opens and closes a separate TCP connection between the client and server.
    - HTTP/1.0 uses non-persistent connections.
- Persistent TCP Connection
    - Server leaves the TCP connection open after sending a response for a certain time.
    - HTTP/1.1 uses persistent connections.
- Default HTTP uses persistent connections with pipelining (client sends multiple requests without waiting for response).

## RTT (Round Trip Time)
- Time it takes for a small packet to travel from client-to-server and then back to the client.
- HTTP connections have a total response time of two RTTs and the file transmission time at the server. 

## References
- Computer Networking: A Top-Down Approach (8th edition)
