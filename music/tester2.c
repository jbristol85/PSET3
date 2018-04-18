   // Helper functions for music
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include "helpers.h"
#include <string.h>
#include <math.h>


   int main(void)
{


    string note = get_string("Note: ");


    char letter = note[0];
    int octave;
    int accidental = 0;
    int notelen = strlen(note);
    // int totalhz;
    float letterhz = 0.00;
    float accidentalhz = 0.0;
    float acctotalhz;
    float octavehz;

    if (notelen == 3)
    {
        octave = note[2];
        accidental = note[1];
    }
    else
    {
       octave = note[1];
    }

    // printf("letter = %c\n", letter);
    // printf("accidental = %i\n", accidental);
    // printf("octave = %i\n", octave);
    switch(letter)
    {
        case 65:
            letterhz = 440;
            break;
        case 66:
            letterhz = 440 * pow(2, 2.00/12.00);
            break;
        case 67:
            letterhz = 440 / pow(2, 9.00/12.00);
            break;
        case 68:
            letterhz = 440 / pow(2, 7.00/12.00);
            break;
        case 69:
            letterhz = 440 / pow(2, 5.00/12.00);
            break;
        case 70:
            letterhz = 440 / pow(2, 4.00/12.00);
            break;
        case 71:
            letterhz = 440 / pow(2, 2.00/12.00);
            break;
    }
    letterhz = round(letterhz);
    // printf("%i\n", totalhz);

    if(accidental == 35)
    {
        accidentalhz = letterhz * pow(2, 1.0/12);
        acctotalhz = accidentalhz;
    }
    else if (accidental == 98)
    {
        accidentalhz = letterhz / pow(2, 1.0/12);
        acctotalhz = accidentalhz;
    }
    else
    {
        acctotalhz = letterhz;
    }

    // printf("%i\n", acctotalhz);

    switch(octave)
    {
        case 52:  // 4th octave
            octavehz = rint(acctotalhz);
            break;
        case 51:  // 3rd
            octavehz = rint(acctotalhz / 2);
            break;
        case 50:  // 2nd
            octavehz = rint(acctotalhz / 4);
            break;
        case 49:  // 1st
            octavehz = rint(acctotalhz / 8);
            break;
        case 53:  // 5th
            octavehz = rint(acctotalhz * 2);
            break;
        case 54: // 6th
            octavehz = rint(acctotalhz * 4);
            break;
        case 55:  // 7th
            octavehz = rint(acctotalhz * 8);
            break;
        case 56:  // 8th
            octavehz = rint(acctotalhz * 16);
    }
    // return octavehz;
    printf("%i\n", octavehz);

}