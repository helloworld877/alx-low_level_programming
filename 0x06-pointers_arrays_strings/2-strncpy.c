#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncpy- Checks if a character is a letter.
 *
 * @dest: A pointer.
 * @src: A pointer.
 * @n: A number.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{

		dest[j] = src[j];
	}

	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
