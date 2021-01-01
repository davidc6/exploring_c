#include <stdio.h> 

void swap(int *num_one, int *num_two);

void swap(int *num_one, int *num_two) {
  int temp = *num_one;
  
  *num_one = *num_two;
  *num_two = temp;

  return;
}

int main(void) {
  int num_one = 1;
  int num_two = 2;
  
  printf("main: %d %d\n", num_one, num_two);
  
  swap(&num_one, &num_two);
  
  printf("main: %d %d\n", num_one, num_two);
  
  return 0;
}
