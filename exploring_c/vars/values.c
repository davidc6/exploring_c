#include <stdio.h>

// pass-by-value
void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;
  printf("swap(): a = %d, b = %d\n", a, b);
}

// pointers - referencing the original addresses of ints
// pass-by-reference
void swapPointers(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
  return;
}

int main(void) {
  int a = 21;
  int b = 17;

  swap(a, b);
  printf("main(): a = %d, b = %d\n", a, b);

  swapPointers(&a, &b);
  printf("main() - after swap: a = %d, b = %d\n", a, b);

  return 0;
}
