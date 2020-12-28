#include <stdio.h>

int main() {
  const char aArr[] = "ab"; // 3 bytes; 2 chars and null terminator
  int aInt = 'a'; // 4 bytes on gcc
  char aChar = 'a'; // 1 byte

  // %lu - [l]ong int and [u]nsigned decimal integer
  printf("%lu - %c \n", sizeof(aInt), aInt); // 4
  printf("%lu - %c \n", sizeof(aChar), aChar); // 1
  printf("%lu - %s \n", sizeof(aArr), aArr); // 3

  return 0;
}
