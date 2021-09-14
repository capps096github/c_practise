#include <stdio.h>
#include "colors.c"
#include "greatest_of_2.c"
#include "factorial.c"
#include "factors.c"

// Program Menu
void menu()
{

  char exit;
  do
  {
    int menuIndex = 0;
    char *indicies = "1, 2, 3 or 4";
    do
    {

      blueColor();
      printf("\nWhat would you love to do today?");
      whiteColor();

      printf("\n\nChoose from a number (1 or 2) from the Menu Below:\n");
      printf("1: Find the greatest of 2 numbers\n");
      printf("2: Find the greatest of 3 numbers\n");
      printf("3: Find the factorial of a number\n");
      printf("4: Find the factors of a number\n");

      yellowColor();
      printf("\nChoice: (%s) : ",indicies);
      scanf("%d", &menuIndex);
      whiteColor();

      switch (menuIndex)
      {
      case 1:
        sectionOf2();
        break;
      case 2:
        sectionOf3();
        break;
      case 3:
        factorialOfNumbers();
        break;
      case 4:
        factorsOfANumber();

        break;

      default:
        redColor();
        printf("Error!\nEnter either %s\n\n",indicies);
      }
    } while (menuIndex < 1 || menuIndex > 4);

    yellowColor();
    printf("\nEnter y to exit the program: ");
    scanf("%c", &exit);
    printf("\n\n");
    whiteColor();

  } while (exit != 'y');
}