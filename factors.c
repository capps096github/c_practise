// factors of 10
// 1,2,5,10

void printFactors(int number)
{
  int x = 0;

  greenColor();
  printf("\nThe Factors of %d are: ", number);
  printf("{ ");


  for (int i = number; i > 0; i--)
  {
    if ((number % i) == 0)
    {
      if (i == 1)
        printf("%d", i);
      else
        printf("%d, ", i);

      x++;
    }
  }
  printf(" }");

  if (x == 2)
  {
    printf("\n%d is a Prime Number", number);
  }
}

void factorsOfANumber()
{
  blueColor();
  printf("\n\nFACTORS OF A NUMBER\n");

  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  if (n <= 0)
  {
    redColor();
    printf("\n No Factors Found", n);
  }
  else
  {

    printFactors(n);
  }
  whiteColor();
}
