#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_times_table- prints to 98.
 *
 * @n: A number.
 * Return:
 * True if the character is lowercase, False otherwise.
 */

void print_times_table(int n)
{
	int i, j, x;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			x = i * j;

			if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((i * j) + '0');
			}
			else if (x < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (x < 1000)
			{
				_putchar(' ');
				_putchar(x / 100 + '0');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				putchar(x / 1000 + '0');
				_putchar(((x % 1000) / 100) + '0');
				_putchar(((x % 100) / 10) + '0');
				_putchar(x % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
