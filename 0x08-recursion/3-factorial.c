#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * factorial- Checks if a character is a letter.
 *
 * @n: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
