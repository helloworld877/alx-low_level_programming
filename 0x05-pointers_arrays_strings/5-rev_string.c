#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string- Checks if a character is a letter.
 *
 * @s: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void rev_string(char *s)
{
	int length, i;
	char *rev;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;
	for (i = 0; i < length; i++)
	{
		*rev = *s;
		s--;
		rev++;
	}

	s = rev;
}
