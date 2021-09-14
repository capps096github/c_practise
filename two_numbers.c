#include <stdio.h>

int a, b, c;
int main()
{
  printf("Enter the following values\n");

  printf("a: ");
  scanf("%d", &a);

  printf("b: ");
  scanf("%d", &b);

  c = a + b;

  printf("The sum of %d + %d = %d", a, b, c);

  return 0;
}
