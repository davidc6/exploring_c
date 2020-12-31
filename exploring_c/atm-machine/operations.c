#include <stdio.h>

void deposit(int* balance) {
  int depositAmount = 0;

  printf("How much do you want to deposit? £");
  scanf("%d", &depositAmount);

  if (depositAmount > 0) {
    *balance += depositAmount;
  }
}

void withdraw(int* balance) {
  int amountToWithdraw = 0;

  printf("How much do you want to withdraw? £");
  scanf("%d", &amountToWithdraw);
  
  if (*balance > 0 && amountToWithdraw > 0 && *balance > amountToWithdraw) {
    *balance -= amountToWithdraw;
  }
}
