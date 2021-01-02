#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// fn takes in two character pointers as parameters
// returns negated result, coerces into a bool
bool are_strs_eql(const char* strOne, const char* strTwo) {
  return !strcmp(strOne, strTwo);
}

// fn does not accept any paramaters
int main(void) {
  const char* name1 = "Pete";
  const char* name2 = "Pete";
  
  bool names_are_eql = are_strs_eql(name1, name2);
  
  printf("These names are equal: %s\n", names_are_eql ? "true" : "false");
  
  return 0;
}
