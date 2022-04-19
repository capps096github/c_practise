
// constants
#include "constants.c"

// marking guide logic
#include "marking_guide.c"

void awardCapturedLetter(char letter, int capturedMatrix[ROWS][COLS]);
int markingLogic(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int row, int col);
float awardMarks(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS]);

// Logic flow
// 1. attempAssignment
// 2. captureLetterMatrix
// 3. awardCapturedLetter
// 3. get the average of all ths marks later on


// Assess the pupil's marks
// this calls all the necessary functions to award marks to the pupil
void assessPupil()
{
}


// this function takes in the letter, and its captured matrix and returns a mark
// the mark is the number of correct marks
void awardCapturedLetter(char letter, int capturedMatrix[ROWS][COLS])
{
  printf("\n\n------------------------- SCORE for LETTER %c -------------------------\n\n", letter);

  float score = 0;

  // the expected matrix is the letter matrix
  // we shall use the letter to determine which matrix to use
  //  A-Z for the letters
  switch (letter)
  {
  case 'A':
    score = awardMarks(letter_a, capturedMatrix);
    break;
  case 'B':
    score = awardMarks(letter_b, capturedMatrix);
    break;
  case 'C':

    score = awardMarks(letter_c, capturedMatrix);
    break;
  case 'D':
    score = awardMarks(letter_d, capturedMatrix);
    break;
  case 'E':
    score = awardMarks(letter_e, capturedMatrix);
    break;
  case 'F':
    score = awardMarks(letter_f, capturedMatrix);
    break;
  case 'G':
    score = awardMarks(letter_g, capturedMatrix);
    break;

  case 'H':
    score = awardMarks(letter_h, capturedMatrix);
    break;

  case 'I':
    score = awardMarks(letter_i, capturedMatrix);
    break;

  case 'J':
    score = awardMarks(letter_j, capturedMatrix);
    break;

  case 'K':
    score = awardMarks(letter_k, capturedMatrix);
    break;

  case 'L':
    score = awardMarks(letter_l, capturedMatrix);
    break;

  case 'M':
    score = awardMarks(letter_m, capturedMatrix);
    break;

  case 'N':
    score = awardMarks(letter_n, capturedMatrix);
    break;

  case 'O':
    score = awardMarks(letter_o, capturedMatrix);
    break;

  case 'P':
    score = awardMarks(letter_p, capturedMatrix);
    break;

  case 'Q':
    score = awardMarks(letter_q, capturedMatrix);
    break;

  case 'R':
    score = awardMarks(letter_r, capturedMatrix);
    break;

  case 'S':
    score = awardMarks(letter_s, capturedMatrix);
    break;

  case 'T':
    score = awardMarks(letter_t, capturedMatrix);
    break;

  case 'U':
    score = awardMarks(letter_u, capturedMatrix);
    break;

  case 'V':
    score = awardMarks(letter_v, capturedMatrix);
    break;

  case 'W':
    score = awardMarks(letter_w, capturedMatrix);
    break;

  case 'X':
    score = awardMarks(letter_x, capturedMatrix);
    break;

  case 'Y':
    score = awardMarks(letter_y, capturedMatrix);
    break;

  case 'Z':
    score = awardMarks(letter_z, capturedMatrix);
    break;

  default:
    printf("Invalid Letter\n");

    break;
  }

// here are your marks
printf("Your score is %.0f%c", score, '%');
}



// marking function that takes in 2 integer arrays ,compares their values at the given position,if the values are matching, award a mark, else award a zero
int markingLogic(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int row, int col)
{
  // if the value at the given row and column is not equal to the value at the same row and column in the second matrix
  if (matrix1[row][col] != matrix2[row][col])
  {
    // return 0
    return 0;
  }
  else
  {
    // return 1
    return 1;
  }
}

// This is the function that does the actual awarding of marks based on user input
float awardMarks(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS])
{
  // marks
  int marks = 0;
  // score out of 100
  float score = 0;

  // loop through the rows
  for (int row = 0; row < ROWS; row++)
  {
    // loop through the columns
    for (int col = 0; col < COLS; col++)
    {
      // if the value at the given row and column is not equal to the value at the same row and column in the second matrix
      marks += markingLogic(matrix1, matrix2, row, col);
    }
  }

  score = (marks / MAX_SIZE) * 100;

  // return the score
  return score;
}
