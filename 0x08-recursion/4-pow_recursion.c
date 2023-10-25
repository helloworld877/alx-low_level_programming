#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion- Checks if a character is a letter.
 *
 * @x: A pointer.
 * @y: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
