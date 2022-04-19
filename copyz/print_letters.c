// constants
#include "constants.c"

void printLetterMatrixFromArray(int letterMatrix[ROWS][COLS]);

// This function prints the letter pattern in form of * and spaces
void printLetterMatrixFromArray(int letterMatrix[ROWS][COLS])
{

  printf("\n\n------------------------- LETTER MATRIX -------------------------\n\n");

  // print the table body
  for (int row = 0; row < ROWS; row++)
  {
    for (int col = 0; col < COLS; col++)
    {
      if (letterMatrix[row][col] == 0)
      {
        printf("%2c", ' ');
      }
      else
      {
        printf("%2c", '*');
      }
    }
    printf("\n");
  }
}
