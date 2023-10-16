#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts- Checks if a character is a letter.
 *
 * @str: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
