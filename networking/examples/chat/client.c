#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define MAX_BUFFER_SIZE 256

int main(int argc, const char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "%s\n usage: %s [hostname] [port]\n", argv[0], argv[0]);
    exit(-1);
  }

  int port = atoi(argv[2]);

  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd < 0) {
    fprintf(stderr, "Failed to create socket.");
    exit(-1);
  }

  struct hostent *server = gethostbyname(argv[1]);
  if (server == NULL) {
    fprintf(stderr, "Could not find hostname %s", argv[1]);
    exit(-1);
  }

  struct sockaddr_in server_address;
  server_address.sin_family = server->h_addrtype;
  server_address.sin_port = htons(port);
  bcopy((char *)server->h_addr_list[0], (char *)&server_address.sin_addr.s_addr,
        server->h_length);

  if (connect(sockfd, (struct sockaddr *)&server_address,
              sizeof(server_address)) < 0) {
    fprintf(stderr, "Failed to connect.");
    exit(-1);
  }

  char buffer[MAX_BUFFER_SIZE];
  while (1) {
    fgets(buffer, MAX_BUFFER_SIZE, stdin);
    if (write(sockfd, buffer, strlen(buffer)) < 0) {
      fprintf(stderr, "Failed writing to socket.");
      exit(-1);
    }

    if (read(sockfd, buffer, MAX_BUFFER_SIZE) < 0) {
      fprintf(stderr, "Failed reading from socket.");
      exit(-1);
    }
    printf("[SERVER] %s", buffer);
  }

  close(sockfd);

  return 0;
}
