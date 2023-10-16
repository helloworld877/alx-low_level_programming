#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen- Checks if a character is a letter.
 *
 * @s: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
