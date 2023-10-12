#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * _isUpper - Checks if a character is uppercase.
 *
 * @c: A character.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
