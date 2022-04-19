#include <stdio.h>
#include <stdlib.h>

// include the letters.c file
#include "letters.c"
#include "marking_guidex.c"

int main()
{
    // sqlConnect();
        //     printLetterMatrixFromArray(letter_a);
        //     printLetterMatrixFromArray(letter_b);
        //     printLetterMatrixFromArray(letter_c);
        //     printLetterMatrixFromArray(letter_d);
        //     printLetterMatrixFromArray(letter_e);
        //     printLetterMatrixFromArray(letter_f);
        //     printLetterMatrixFromArray(letter_g);
        //     printLetterMatrixFromArray(letter_h);
        //     printLetterMatrixFromArray(letter_i);
        //     printLetterMatrixFromArray(letter_j);
        //     printLetterMatrixFromArray(letter_k);
        //     printLetterMatrixFromArray(letter_l);
        //     printLetterMatrixFromArray(letter_m);
        //     printLetterMatrixFromArray(letter_n);
        //     printLetterMatrixFromArray(letter_o);
        //     printLetterMatrixFromArray(letter_p);
        //     printLetterMatrixFromArray(letter_q);
        //     printLetterMatrixFromArray(letter_r);
        //     printLetterMatrixFromArray(letter_s);
        //     printLetterMatrixFromArray(letter_t);
        //     printLetterMatrixFromArray(letter_u);
        //     printLetterMatrixFromArray(letter_v);
        //     printLetterMatrixFromArray(letter_w);
        //     printLetterMatrixFromArray(letter_x);
        //     printLetterMatrixFromArray(letter_y);
        //     printLetterMatrixFromArray(letter_z);

        // captureLetterMatrix('A');

        // printLetterMatrix('A');

        //   we shall use if else statement to compare if the arrays are equal
        //   if they are equal, then we shall print the letters are equal
        //   if they are not equal, then we shall print the letters are not equal
        // if (compareMatrices(letter_a, letter_ax) == 1)
        // {
        //     printf("letter_a and letter_b are equal\n");
        // }
        // else
        // {
        //     printf("letter_a and letter_b are not equal\n");
        // }

        // award marks
        // awardMarks(letter_a, letter_ax);

        // print the score
        float marks = (float)awardMarks(letter_a, letter_a);
    float score=(marks/28)*100;

    printf("\n\n------------------------- SCORE -------------------------\n\n");

    // here are your marks
    printf("Your score is %.0f%c", score, '%');

    return 0;
}
