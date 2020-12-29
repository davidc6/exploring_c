#include <stdio.h>
#include <string.h>

struct Employee {
  char name[30]; // char array of size 30
  short id;
  float salary;
}; // "record" structure

int main() {
  struct Employee employeeOne; // create a variable
  struct Employee *ptemp; // create a pointer variable
  ptemp = &employeeOne; // assign memory address
  
  ptemp->id = 123; // assign 123
  strncpy(ptemp->name, "onetwothree", sizeof(employeeOne.name)); // copy "onetwo" to char array
    
  printf("%d %s\n", employeeOne.id, employeeOne.name);
  return 0;
}
