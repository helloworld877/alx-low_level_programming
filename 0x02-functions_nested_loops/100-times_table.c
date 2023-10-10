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
		for (j = 0; j < n; j++)
		{
			if (j == 0)
			{
				printf("0,");
				continue;
			}
			x = i * j;

			printf("%4d", x);
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
