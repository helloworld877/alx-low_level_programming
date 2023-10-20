#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcmp- Checks if a character is a letter.
 *
 * @s1: A pointer.
 * @s2: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}