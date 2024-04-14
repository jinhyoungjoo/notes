# HTTP (HyperText Transfer Protocol)

- OSI Layer 7 (Application Layer), Port 80 (TCP)
- HTTP defines how Web clients request Web pages from Web servers and how servers transfer Web pages to clients.

## HTTP Message Format
- HTTP Request Message
    - Request Line (first line) = Method + URL + HTTP Version
    - Header Lines (subsequent lines)
    - Entity Body (after header lines)
    ```bash
    GET /somedir/page.html HTTP/1.1
    Host: www.someschool.edu
    Connection: close
    User-agent: Mozilla/5.0
    Accept-language: fr
    ```

- HTTP Response Message
    - Status Line (first line) = HTTP Version + Status Code + Status Message
    ```bash
    HTTP/1.1 200 OK
    Connection: close
    Date: Tue, 18 Aug 2015 15:44:04 GMT
    Server: Apache/2.2.3 (CentOS)
    Last-Modified: Tue, 18 Aug 2015 15:11:03 GMT Content-Length: 6821
    Content-Type: text/html
    (data)
    ```

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

## Cookies
- Cookies add state to the stateless HTTP.
- A cookie can be set by `Set-cookie: <Cookie>` in the HTTP response header line.
- A cookie can be sent by `Cookie: <Cookie>` in the HTTP request header line.

## References
- Computer Networking: A Top-Down Approach (8th edition)
