#include <stdio.h>

void getAndPrintStudentsInfo();

int main()
{

  char exitCharacter;

  do
  {

    getAndPrintStudentsInfo();

    printf("\n\nEnter character Y to Exit the Program: ");
    scanf("%c", &exitCharacter);
    printf("\n\n");

  } while (exitCharacter != 'Y');
  // This loop runs until the user enters a character Y

  return 0;
}
// ★ Xephas Codes



// This Function is responsible for printing and getting Student's information
void getAndPrintStudentsInfo()
{
  printf("STUDENTS' BIO DATA PROGRAM");

  // the array sizes [] can be changed to any format you want
  char studentName[25], regNumber[12], course[100];

  printf("\n\nENTER THE STUDENTS BIO DATA: \n");

  printf("Student's Name: ");
  gets(studentName);

  printf("Registration Number: ");
  scanf("%s", &regNumber);

  printf("Course: ");
  scanf("%s", &course);

  printf("\n\nHere is %s's BIO DATA: \n", studentName);
  printf("Registration Number: %s\n", regNumber);
  printf("Course: %s\n", course);
}

// ★ Xephas Codes
