// Helper functions for music
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
// #include "helpers.h"
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
    float accidentalhz = 0.00;
    float acctotalhz = 0.00;
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
            letterhz = 440 * pow(2, 2./12);
            break;
        case 67:
            letterhz = 440 / pow(2, 9./12);
            break;
        case 68:
            letterhz = 440 / pow(2, 7./12);
            break;
        case 69:
            letterhz = 440 / pow(2, 5./12);
            break;
        case 70:
            letterhz = 440 / pow(2, 4./12);
            break;
        case 71:
            letterhz = 440 / pow(2, 2./12);
            break;
    }
    // letterhz = round(letterhz);
    printf("%f\n", letterhz);

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

    printf("%f\n", acctotalhz);

    switch(octave)
    {
        case 52:  // 4th octave
            octavehz = acctotalhz;
            break;
        case 51:  // 3rd
            octavehz = acctotalhz / 2.;
            break;
        case 50:  // 2nd
            octavehz = acctotalhz / 4.;
            break;
        case 49:  // 1st
            octavehz = acctotalhz / 8.;
            break;
        case 53:  // 5th
            octavehz = acctotalhz * 2.;
            break;
        case 54: // 6th
            octavehz = acctotalhz * 4.;
            break;
        case 55:  // 7th
            octavehz = acctotalhz * 8.;
            break;
        case 56:  // 8th
            octavehz = acctotalhz * 16.;
    }
    // return octavehz;
    int ret = lroundf(octavehz);
    printf("%i\n", ret);
}

















// Converts a fraction formatted as X/Y to eighths
// int denom;
// int numer;

// int beats;
// string fraction;

// int main(void)
// {
//     fraction = get_string("fraction: ");

//     int denom = fraction[2] - '0';
//     int numer = fraction[0] - '0';


//     switch(denom)
//     {
//         case 8:
//             beats = numer;
//             break;
//         case 4:
//             beats = numer *2;
//             break;
//         case 2:
//             beats = numer * 4;
//             break;
//     }
//     printf("%i\n", beats );
//     return 0
// }
