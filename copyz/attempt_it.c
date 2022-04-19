// constants
#include "constants.c"

// capture logic
#include "capture_letters.c"

// function declarations
void attemptAssignment(char letters[], int);

// the attempt assignment function takes in a character array and loops through each character in the array while calling the captureLetterMatrix
// function for each character in the array
void attemptAssignment(char letters[], int length)
{
  // incase we are calling the function, the length is the character_no stored in the db
  for (int i = 0; i < length; i++)
  {
    captureLetterMatrix(letters[i]);
  }
}

