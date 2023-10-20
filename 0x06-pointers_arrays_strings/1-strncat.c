#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncat- Checks if a character is a letter.
 *
 * @dest: A pointer.
 * @src: A pointer.
 * @n: A number.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; ((j < n) && (src[j] != '\0')); j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
