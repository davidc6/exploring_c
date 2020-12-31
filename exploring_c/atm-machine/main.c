#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "operations.h"
#include "utils.h"

int main(void) {
  if (isValidPin()) {
    int balance = 5;
    int * balancePointer = &balance;
    char doContinue = 'y';

    while (doContinue == 'y') {
      int option = getOption();

      if (option == 1) {
        printf("Your balance is: £%d\n", *balancePointer);
      } else if (option == 2) {
        deposit(balancePointer);
      } else if (option == 3) {
        withdraw(balancePointer);
      } else if (option == 4) {
        doContinue = 'n';
      } else {
        printf("Invalid option");
        return EXIT_SUCCESS;
      }
    }
  }

  printf("Goodbye.\n");

  return EXIT_SUCCESS;
}
