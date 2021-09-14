#include <stdio.h>
#include "colors.c"

void registerStudent(), menu(), withdraw(), depositMore();

char regNumber[30];
int deposit = 0;

int main()
{

  registerStudent();

  menu();

  printf("\n=============Exited=============\n\n");

  return 0;
}

void menu()
{
  int selectedMenuIndex = 0;
  char *indicies = "1, 2 or 3";
  printf("\n================================\n\n");

  printf("What would you like to do?\n");
  printf("1. Withdraw your Money.\n");
  printf("2. Deposit more Money.\n");
  printf("3. Quit (Exit) the program.\n");

  printf("\nChoice: (%s) : ", indicies);
  scanf("%d", &selectedMenuIndex);
  printf("\n================================\n\n");

  switch (selectedMenuIndex)
  {
  case 1:
    // Withdraw
    withdraw();
    break;
  case 2:
    // Deposit More
    depositMore();

    break;

  default:
    // Quit the Program
    printf("\nProgram Exitted.\n");
    break;
  }
}

void withdraw()
{
  int withdraw_amount = 0;

  printf("How Much would you like to withdraw?:  ");
  scanf("%d", &withdraw_amount);

  if (withdraw_amount <= deposit)
  {
    deposit -= withdraw_amount;
    printf("\nThanks for Banking with us.");
    printf("\nYour New Account Balance: %d\n", deposit);
  }
  else
  {

    printf("\nAccount %s Has Insufficient funds\n\n", regNumber);
  }
  menu();
}

void depositMore()
{
  int new_deposit_amount = 0;

  printf("How Much would you like to Deposit today?:  ");
  scanf("%d", &new_deposit_amount);

  deposit += new_deposit_amount;
  printf("\nThanks for Banking with us.\n");

  printf("Your New Account Balance: %d\n", deposit);

  menu();
}

void registerStudent()
{
  printf("CoCIS STUDENTS' SACCO");

  printf("\n\nHello there, Welcome to the CoCIS STUDENTS' SACCO\n\n");
  printf("================================\n\n");

  printf("REGISTER WITH US TODAY:\n");

  printf("Registration Number: ");
  scanf("%s", &regNumber);

  printf("Deposit Amount: ");
  scanf("%d", &deposit);

  printf("\nWelcome, Registration Successful !!\n");

  printf("Registration Number: %s\n", regNumber);
  printf("Deposit Amount: %d\n", deposit);
}

// ★ Xephas Brian Codes
