#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev- Checks if a character is a letter.
 *
 * @s: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void print_rev(char *s)
{
	int length, i;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;
	for (i = 0; i < length; i++)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
