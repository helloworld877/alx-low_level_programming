#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: A character.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
