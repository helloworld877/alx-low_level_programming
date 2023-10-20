#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcat- Checks if a character is a letter.
 *
 * @n: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		for (j = 0; src[j] != '\0'; j++)
			dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}