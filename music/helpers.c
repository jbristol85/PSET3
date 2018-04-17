// Helper functions for music

#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
  int beats;

    int denom = fraction[2] - '0';
    int numer = fraction[0] - '0';

    switch(denom)
    {
        case 8:
            beats = numer;
            break;
        case 4:
            beats = numer * 2;
            break;
        case 2:
            beats = numer * 4;
            break;
    }

    return beats;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    char letter = note[0];
    char accidental;
    int octave;

    if(isalnum(note[1]))






}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (s == " ")
    {
        return true;
    }
    else
    {
        return false;
    }
}
