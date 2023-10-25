#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion- Checks if a character is a letter.
 *
 * @s: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	if (*(s + 1) == '\0')
	{
		return (1);
	}

	return (1 + _strlen_recursion(s + 1));
}
