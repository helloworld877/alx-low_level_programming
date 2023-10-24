#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _memset- Checks if a character is a letter.
 *
 * @s: A pointer.
 * @b: A pointer.
 * @n: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *initial;

	initial = s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return initial;
}
