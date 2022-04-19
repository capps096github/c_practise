
// constants
#include "constants.c"

// print logic
#include "print_letters.c"

// marking guide logic
#include "marking_guide.c"

// awards logic
#include "awards_logic.c"


// function declarations
void captureLetterMatrix(char);
void letterHint(char);

// attempt assignment function to capture the characters
void captureLetterMatrix(char letter)
{

  // hint for the letter
  letterHint(letter);

  // Letter Matrix
  int capturedMatrix[ROWS][COLS];

  printf("------------------------- ENTER THE MATRIX VALUES for LETTER %c -------------------------\n\n", letter);

  // loop through the rows
  for (int row = 0; row < ROWS; row++)
  {
    // loop through the columns
    for (int col = 0; col < COLS; col++)
    {
      printf("%c [%d] [%d]: ", letter, row, col);
      scanf("%d", &capturedMatrix[row][col]);
    }
  }

  // Award a mark for the captured letter
  awardCapturedLetter(letter, capturedMatrix);
}

// this function takes the character and provides a hint to the pupil on how the letter should be constructed
void letterHint(char letter)
{

  printf("\n\n------------------------- HINT for LETTER %c -------------------------\n\n", letter);
  printf("The letter %c is constructed by the following pattern:\n\n", letter);
  printf("\n\nHint: Place 1's for all * and 0's for all spaces\n\n");

  // the switch statement to check through A-Z to determine the letter and then prints the hint
  switch (letter)
  {
  case 'A':

    printLetterMatrixFromArray(letter_a);
    break;
  case 'B':
    printLetterMatrixFromArray(letter_b);
    break;
  case 'C':
    printLetterMatrixFromArray(letter_c);
    break;
  case 'D':
    printLetterMatrixFromArray(letter_d);
    break;
  case 'E':
    printLetterMatrixFromArray(letter_e);
    break;
  case 'F':

    printLetterMatrixFromArray(letter_f);
    break;
  case 'G':
    printLetterMatrixFromArray(letter_g);
    break;
  case 'H':
    printLetterMatrixFromArray(letter_h);
    break;
  case 'I':
    printLetterMatrixFromArray(letter_i);
    break;
  case 'J':
    printLetterMatrixFromArray(letter_j);
    break;
  case 'K':
    printLetterMatrixFromArray(letter_k);
    break;
  case 'L':
    printLetterMatrixFromArray(letter_l);
    break;
  case 'M':
    printLetterMatrixFromArray(letter_m);
    break;
  case 'N':
    printLetterMatrixFromArray(letter_n);
    break;
  case 'O':
    printLetterMatrixFromArray(letter_o);
    break;
  case 'P':
    printLetterMatrixFromArray(letter_p);
    break;
  case 'Q':
    printLetterMatrixFromArray(letter_q);
    break;
  case 'R':
    printLetterMatrixFromArray(letter_r);
    break;
  case 'S':
    printLetterMatrixFromArray(letter_s);
    break;
  case 'T':
    printLetterMatrixFromArray(letter_t);
    break;
  case 'U':

    printLetterMatrixFromArray(letter_u);
    break;
  case 'V':
    printLetterMatrixFromArray(letter_v);
    break;
  case 'W':
    printLetterMatrixFromArray(letter_w);
    break;
  case 'X':
    printLetterMatrixFromArray(letter_x);
    break;
  case 'Y':
    printLetterMatrixFromArray(letter_y);
    break;
  case 'Z':
    printLetterMatrixFromArray(letter_z);
    break;
  default:
    printLetterMatrixFromArray(letter_a);
    break;
  }

  printf("\n\n Here you Go!  All the Best!\n\n");
}
