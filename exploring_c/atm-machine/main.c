#include <stdio.h>

int main() {
  int balance = 0;
  int pinCode = 1234;
  int inputPin;
  int doContinue = 1; // 1 - yes, 2 - on

  printf("Please enter pin: \n");
  scanf("%d", &inputPin);
  
  if (inputPin != pinCode) {
    printf("Invalid Pin.\n"); // TODO: allow to enter three times then lock account
    return 0;
  }
  
  while (doContinue == 1) {
    int operationOption;
    
    printf("Options: \n");
    printf("1 - Balance\n");
    printf("2 - Deposit\n");
    printf("3 - Withdraw ");
    scanf("%d", &operationOption);

    if (operationOption == 1) {
      printf("Your balance is: £%d\n", balance);
    } else if (operationOption == 2) {
      int depositAmount;

      printf("How much do you want to deposit? £");
      scanf("%d", &depositAmount);
      balance += depositAmount;
    } else if (operationOption == 3) {
      int withdrawAmount;
      printf("How much to withdraw? £");
      scanf("%d", &withdrawAmount);
      balance -= withdrawAmount;
    } else {
      printf("Invalid option");
      return 0;
    }
    
      printf("Do want to continue? 1 - yes, 2 - no ");
      scanf("%d", &doContinue);
  }

  printf("Goodbye.\n");

  return 0;
}
