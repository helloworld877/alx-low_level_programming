#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * _isDigit - Checks if a character is digit.
 *
 * @c: A character.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

int _isdigit(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    return (0);
}
