#include <string.h>
#include <stdio.h>

#define ARRAY_SIZE 5

int main()
{

  int integerArray[ARRAY_SIZE];
  printf("\n\nEnter the Array Values here: \n\n");
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    printf("Value %d: ", i);
    scanf("%d", &integerArray[i]);
  }

  int temp = 0;
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    for (int j = 0; j < (ARRAY_SIZE - 1); j++)
    {
      if (*(integerArray + j) > *(integerArray + j + 1))
      {

        temp = *(integerArray + j + 1);
        *(integerArray + j + 1) = *(integerArray + j);
        *(integerArray + j) = temp;
      }
    }
  }

  // Print the Array values as you calculate the sum of the values
  printf("\nHere are the Sorted Array Values (Ascending Order): {");
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    printf(" %d, ", *(integerArray + i));
  }
  printf("}\n\n");

  return 0;
}
// ★ Xephas Codes

void reverse()
{

  char string[] = "Pointers&Arrays";
  printf("Here is the Reverse: %s", strrev(string));
}