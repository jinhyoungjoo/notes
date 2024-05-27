#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define MAX_BUFFER_SIZE 256
#define MAX_CONCURRENT_USERS 5

int main(int argc, const char *argv[]) {
  if (argc < 3) {
    fprintf(stderr, "%s\n usage: %s [hostname] [port]\n", argv[0], argv[0]);
    exit(-1);
  }

  int port = atoi(argv[2]);

  char buffer[MAX_BUFFER_SIZE];

  struct sockaddr_in server_address;
  server_address.sin_family = AF_INET;
  server_address.sin_port = htons(port);
  server_address.sin_addr.s_addr = INADDR_ANY;

  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd < 0) {
    fprintf(stderr, "Failed to create socket.");
    exit(-1);
  }

  if (bind(sockfd, (struct sockaddr *)&server_address, sizeof(server_address)) <
      0) {
    fprintf(stderr, "Failed to bind socket.");
    exit(-1);
  }

  if (listen(sockfd, MAX_CONCURRENT_USERS) < 0) {
    fprintf(stderr, "Failed to listen to socket.");
    exit(-1);
  }

  struct sockaddr_in client_address;
  socklen_t client_length = sizeof(client_address);

  int new_sockfd =
      accept(sockfd, (struct sockaddr *)&client_address, &client_length);
  if (new_sockfd < 0) {
    fprintf(stderr, "Failed to accept incoming request.");
    exit(-1);
  }

  while (1) {
    if (read(new_sockfd, buffer, sizeof(buffer)) < 0) {
      fprintf(stderr, "Reading from sockfd failed.");
      exit(-1);
    }
    fprintf(stdout, "[CLIENT] %s\n", buffer);

    fgets(buffer, sizeof(buffer), stdin);

    if (write(new_sockfd, buffer, strlen(buffer)) < 0) {
      fprintf(stderr, "Writing to sockfd failed.");
      exit(-1);
    }
  }

  close(sockfd);
  close(new_sockfd);

  return 0;
}
