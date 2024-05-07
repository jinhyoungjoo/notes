#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>

int main(int argc, const char **argv) {
  int fd = openat(AT_FDCWD, "./test", O_RDWR | O_CREAT);
  if (fd == -1) {
    perror("Failed to create file");
    exit(-1);
  }

  printf("File created: %d\n", fd);

  return 0;
}
