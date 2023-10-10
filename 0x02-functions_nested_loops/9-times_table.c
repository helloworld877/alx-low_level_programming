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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				putchar('0');
				putchar(',');
				continue;
			}
			int x = i * j;

			if (x < 10)
			{
				putchar(' ');
				putchar(' ');
				putchar((i * j) + '0');
			}
			else
			{
				putchar(' ');
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
			}
			if (j != 9)
			{
				putchar(',');
			}
			else
			{
				putchar('\n');
			}
		}
	}
}

void main()
{
	times_table();
}