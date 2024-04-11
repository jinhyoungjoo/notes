#include "math.h"
#include <stdio.h>

int main(int argc, const char *argv[]) {
  printf("Hello World\n");

  int x = 1, y = 2;
  printf("%d + %d = %d\n", x, y, add(1, 2));
  printf("%d + %d = %d\n", x, y, subtract(1, 2));

  return 0;
}
