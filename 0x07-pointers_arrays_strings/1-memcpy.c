#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _memcpy- Checks if a character is a letter.
 *
 * @dest: A pointer.
 * @src: A pointer.
 * @n: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *initial;

	initial = dest;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return initial;
}
