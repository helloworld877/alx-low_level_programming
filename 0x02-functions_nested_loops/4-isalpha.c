#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks if a character is a letter.
 *
 * @c: A character.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return 1;
	}
	return 0;
}