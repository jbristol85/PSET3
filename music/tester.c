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
    int totalhz;
    float letterhz = 0.0;
    float accidentalhz = 0.0;
    int acctotalhz;

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
            letterhz = 440 * pow(2, 2.0/12);
            break;
        case 67:
            letterhz = 440 * pow(2, 3.0/12);
            break;
        case 68:
            letterhz = 440 * pow(2, 6.0/12);
            break;
        case 69:
            letterhz = 440 * pow(2, 7.0/12);
            break;
        case 70:
            letterhz = 440 * pow(2, 8.0/12);
            break;
        case 71:
            letterhz = 440 * pow(2, 10.0/12);
            break;
    }
    totalhz = round(letterhz);
    // printf("%i\n", totalhz);

    if(accidental == 35)
    {
        accidentalhz = totalhz * pow(2, 1.0/12);
        acctotalhz = round(accidentalhz);
    }
    else if (accidental == 98)
    {
        accidentalhz = totalhz / pow(2, 1.0/12);
        acctotalhz = round(accidentalhz);
    }
    else
    {
        acctotalhz = totalhz;
    }

    // printf("%i\n", acctotalhz);

    // switch(octave)
    // {
    //     case 51:
    //     case 50:
    // }
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
