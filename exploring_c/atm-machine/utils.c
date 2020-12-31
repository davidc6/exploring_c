#include <stdio.h>
#include <stdbool.h>

bool isValidPin() {
  int pinCode = 1234;
  int inputPin;

  printf("Please enter pin: \n");
  scanf("%d", &inputPin);

  if (inputPin != pinCode) {
    // TODO: allow to enter three times then lock account
    printf("Invalid Pin.\n");
    return false;
  }

  return true;
}

int getOption() {
  int operationOption;

  printf("Options: \n");
  printf("1 - Balance\n");
  printf("2 - Deposit\n");
  printf("3 - Withdraw\n");
  printf("4 - Quit\n");
  // usage of scanf is not recommended - see: http://c-faq.com/stdio/scanfprobs.html
  scanf("%d", &operationOption);

  if (operationOption >= 1 && operationOption <= 4) {
    return operationOption;
  }

  return 0;
}
