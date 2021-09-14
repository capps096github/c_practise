
// factorial of a number

long int factorial(int x)
{
  if (x == 0 || x == 1)
  {
    return 1;
  }
  else
  {
    return x * factorial(x - 1);
  }
}

long int factorialMethod2(int x)
{
  int fact = 1;
  if (x == 0 || x == 1)
  {
    fact = 1;
  }
  else
  {
    for (int i = x; i > 0; i--)
    {
      fact *= i;
    }
  }

  return fact;
}

// 3. Find the factorialOfNumbers
void factorialOfNumbers()
{
  blueColor();
  printf("\n\nFACTORIAL OF A NUMBER\n");

  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  if (n < 0)
  {
    redColor();
    printf("\n Invalid Input (%d), Negatives have no Factorials", n);
  }
  else
  {
    cyanColor();
    printf(" %d! = %ld\n", n, factorial(n));
    greenColor();
    printf(" %d! = %ld\n", n, factorialMethod2(n));
  }
  whiteColor();
}