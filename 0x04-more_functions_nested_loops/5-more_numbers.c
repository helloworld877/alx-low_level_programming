#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - multiplies 2 numbers.
 *
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

void more_numbers(void)
{
	int i, j, tens, units;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			tens = j / 10;
			units = j % 10;
			if (j >= 10)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
