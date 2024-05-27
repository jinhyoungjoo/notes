# C Language Socket Programming

## Server Socket Programming 
- The server side must create a socket, bind the socket to an address, and listen for any incoming connections.
```c
int sockfd = socket(AF_INET, SOCK_STREAM, 0);

struct sockaddr_in serv_addr;
bind(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

listen(sockfd, MAX_CONCURRENT_USERS);

struct sockaddr_in client_addr;
socklen_t client_socklen = sizeof(client_addr);
int new_sockfd = accept(sockfd, (struct sockaddr *)&client_addr, &client_socklen);

while(1) {
    // I/O with new_sockfd
}
```

## Client Socket Programming
- The client side creates a socket, and connect to the socket.
```c
int sockfd = socket(AF_INET, SOCK_STREAM, 0);

struct sockaddr_in serv_addr;
connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

while(1) {
    // I/O with sockfd
}
```
    
