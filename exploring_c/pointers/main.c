#include <stdio.h>

void simplePointer() {
  puts("---- Initialize and set variable to 13 ----\n");
  
  int* pointer; // declare a pointer of type int to store memory address later
  int someInt; // declare a variable of type int

  someInt = 13; // assign 13
  pointer = &someInt; // assign memory address of variable someInt to pointer variable

  printf("Variable - %d\n", someInt); // get value of the variable
  printf("Pointer - %d\n", *pointer); // get value of pointer variable
  printf("Size - %d bytes\n", sizeof(*pointer));
  printf("Memory address - %pn\n", &someInt); // get memory address of someInt variable

  puts("\n---- Set variable to 23 ----\n");

  someInt = 23; // update to 23
  printf("Variable - %d\n", someInt); // get value of updates variable
  printf("Pointer - %d\n", *pointer); // get value of update pointer variable
  printf("Size - %d bytes\n", sizeof(*pointer));
  printf("Memory address - %pn\n", &someInt); // get memory address of someInt variable
  
  puts("\n---- Set pointer variable to 1 ----\n");
  
  *pointer = 1;
  printf("Variable - %d\n", someInt); // get value of updates variable
  printf("Pointer - %d\n", *pointer); // get value of update pointer variable
  printf("Size - %d bytes\n", sizeof(*pointer));
  printf("Memory address - %pn\n", &someInt); // get memory address of someInt variable
}

void arrayPointer() {
  int x[4]; // initialise array of 4 elements
  int i;

  for (i = 0; i < 4; ++i) {
    printf("&x[%d] = %p\n", i, &x[i]);
  }

  printf("Address of array x: %p\n", x);  
}

int main() {
  // simplePointer();
  arrayPointer();

  return 0;
}
