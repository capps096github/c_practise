#include <stdio.h>

int main()
{

  int total = 0;
  for (int i=1; i<=100; i++){
    printf("%d + %d", i, total);
    total += i;
    printf(" = %d\n",total);
  }
  for (int i = 1; i <= 100; i++)
  {
    total += i;
    printf("%d + %d = %d\n", i, (total - i),total);
  }
  printf("Total is %d\n", total);

  return 0;
}
