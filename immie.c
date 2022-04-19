char *trueOrFalseText(int x)
{

  if (x == 0)
  {
    return "False\n\n";
  }
  else
  {
    return "True\n\n";
  }
}

void trueOrFalse()
{

  int x = 200;
  // 4a
  if (x == 200 && x > 200 && !x)
  {
    printf("4a) x==200 && x>200 && !x = %s", trueOrFalseText(1));
  }
  else
  {
    printf("4a) x==200 && x>200 && !x = %s", trueOrFalseText(0));
  }

  // 4b
  if (x == 200 || x > 200 && !x)
  {
    printf("4b) x==200 || x>200 && !x = %s", trueOrFalseText(1));
  }
  else
  {
    printf("4b) x==200 || x>200 && !x = %s", trueOrFalseText(0));
  }

  // 4c
  if (x == 200 && x > 200 || !x)
  {
    printf("4c) x==200 && x>200 || !x = %s", trueOrFalseText(1));
  }
  else
  {
    printf("4c) x==200 && x>200 || !x = %s", trueOrFalseText(0));
  }

  // 4d
  if (x == 200 || x > 200 || !x)
  {
    printf("4d) x==200 || x>200 || !x = %s", trueOrFalseText(1));
  }
  else
  {
    printf("4d) x==200 || x>200 || !x = %s", trueOrFalseText(0));
  }
}
