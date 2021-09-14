#include <stdio.h>

int main()
{
  int a = 5, b = 6, temp;

  printf("a = %d,b = %d\n", a, b);

  // Swap
  temp = a;
  a = b;
  b = temp;

  for (int i = 0; i < a; i++)
    printf("**");

  printf("\nSwapped\n");
  printf("a = %d,b = %d\n", a, b);
  return 0;
}
