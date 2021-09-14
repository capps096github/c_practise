#include <stdio.h>

void greatestOf2(int, int), greatestOf3(int, int, int), sectionOf2(), sectionOf3();

// Section of 2 greatest
void sectionOf2()
{
  greenColor();
  printf("\n\n");
  int a, b;

  printf("GREATEST OF 2 NUMBERS\n");
  printf("\nEnter the values\n");
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  greatestOf2(a, b);
}

// section of 3 greatest
void sectionOf3()
{
  purpleColor();
  printf("\n\n");

  int a, b, c;

  printf("GREATEST OF 3 NUMBERS\n");
  printf("\nEnter the values\n");
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  printf("c: ");
  scanf("%d", &c);
  greatestOf3(a, b, c);
}

// greatest of 2 numbers
void greatestOf2(int x, int y)
{
  cyanColor();
  if (x > y)
    printf("\n%d is greater than %d\n\n", x, y);
  else if (y>x)
    printf("\n%d is greater than %d\n\n", y, x);
  else
    printf("\n%d is equal to %d\n\n", y, x);
  whiteColor();
}

// greatest of 3 numbers
void greatestOf3(int x, int y, int z)
{
  cyanColor();

  if (x >= y && x >= z)
    printf("\n%d is the greatest", x);
  else if (y >= x && y >= z)
    printf("\n%d is greatest of them all", y);
  else if (z >= y && z >= x)
    printf("\n%d is greatest of them all", z);
  else if (x == y == z)
    printf("\nThe numbers are equal");
  whiteColor();
}