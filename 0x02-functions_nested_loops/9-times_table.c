#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * times_table- prints last digit.
 *
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
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
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
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
