#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strchr- Checks if a character is a letter.
 *
 * @s: A pointer.
 * @c: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}

	return NULL;
}
