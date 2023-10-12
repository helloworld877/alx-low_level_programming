#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Checks if a character is digit.
 *
 * @c: A character.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
