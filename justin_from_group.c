#include <stdio.h>

#define ARRAY_SIZE 15
int main()
{
  int numericalValues[ARRAY_SIZE];
  int sumOfNumericalValues = 0;
  double averageOfNumericalValues = 0;

  printf("\n\n-----GETTING THE VALUES & THEIR AVERAGE-----\n\n");

  printf("Enter any %d numerical values below: \n\n", ARRAY_SIZE);

  // Get the Values From the User a number of times equal to the Array
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    printf("Value %d: ", (i + 1));
    scanf("%d", &numericalValues[i]);
  }

  // Print the Array values as you calculate the sum of the values
  printf("\nHere are the Array Values: {");
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    printf(" %d, ", numericalValues[i]);
    sumOfNumericalValues += numericalValues[i];
  }
  printf("}\n\n");

  //Calculate the average of the numerical values an Print it
  // We do some type casting here coz the average isn't expected to be an int
  averageOfNumericalValues = (double)sumOfNumericalValues / ARRAY_SIZE;

  // Added .3lf to get the average to 3dps
  printf("Average of Numerical Values: %.3lf\n", averageOfNumericalValues);

  printf("\n\n----GETTING THE Smallest & Largest VALUES----\n\n");
  // Lets Sort the Array in Ascending Order (Smallest to Largest)
  // and then the 1st Value in the array will be the smallest value.
  // and then the Last Value will be the largest value.

  int temp = 0;

  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    for (int j = 0; j < (ARRAY_SIZE - 1); j++)
    {
      if (numericalValues[j] > numericalValues[j + 1])
      {
        temp = numericalValues[j + 1];
        numericalValues[j + 1] = numericalValues[j];
        numericalValues[j] = temp;
      }
    }
  }

  // Print the Array values as you calculate the sum of the values
  printf("\nHere are the Sorted Array Values (Ascending Order): {");
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    printf(" %d, ", numericalValues[i]);
  }
  printf("}\n\n");

  printf(" THe Smallest Value is %d\n", numericalValues[0]);
  printf(" THe Largest Value is %d\n", numericalValues[ARRAY_SIZE - 1]);

  return 0;
}
