// Write your name and registration number to another file;
// (a) character by character(b) using all the 3 loops
//     Read your name and registration number from another file;
// (a) character by character(b) using all the 3 loops
// Using fgets, fprintf and fputs

// int main()
// {
//   /* code */
//   return 0;
// }

// // Language: c
// // Path: joan.c
// Write your name and registration number to another file;
// (a) character by character(b) using all the 3 loops

void writeNameAndRegNo()
{
  FILE *fp;
  char name[25], regNo[12];
  fp = fopen("joan.txt", "w");
  printf("Enter your name: ");
  gets(name);
  printf("Enter your registration number: ");
  scanf("%s", regNo);
  fputs(name, fp);
  fputs("\n", fp);
  fputs(regNo, fp);
  fclose(fp);
}

void writeNameAndRegNoToFile()
{
  // create a file
  FILE *fp;

  // declare variables
  char name[25], regNo[12];

  // open file
  fp = fopen("joan.txt", "w");

  // get user input
  // name
  printf("Enter your name: ");
  gets(name);

  // reg no
  printf("Enter your registration number: ");
  scanf("%s", regNo);

  // write to file
  // using a loop
  // a) character by character

  // i) for loop
  for (int i = 0; i < strlen(name); i++)
  {
    fputc(name[i], fp);
  }

  // ii) while loop
  int i = 0;
  while (name[i] != '\0')
  {
    fputc(name[i], fp);
    i++;
  }

  // iii) do while loop
  i = 0;
  do
  {
    fputc(name[i], fp);
    i++;
  } while (name[i] != '\0');

  // b) using fputs
  fputs(name, fp);

  // c) using fprintf
  fprintf(fp, "\n");
  fprintf(fp, "%s", regNo);
}


// // Language: c
void readNameAndRegNo()
{
  // create a file
  FILE *fp;

  // declare variables
  char name[25], regNo[12];

  // open file
  fp = fopen("joan.txt", "r");

  // read from file
  // using a loop
  // a) character by character
  // i) for loop
  for (int i = 0; i < strlen(name); i++)
  {
    fgetc(fp);
  }

  // ii) while loop
  int i = 0;
  while (name[i] != '\0')
  {
    fgetc(fp);
    i++;
  }

  // iii) do while loop
  i = 0;
  do
  {
    fgetc(fp);
    i++;
  } while (name[i] != '\0');

  // b) using fgets
  fgets(name, 25, fp);

  // c) using fscanf
  fscanf(fp, "%s", regNo);
}

