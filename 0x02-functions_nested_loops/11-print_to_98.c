#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98- prints to 98.
 *
 * @n: A number.
 * Return:
 * True if the character is lowercase, False otherwise.
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d, ", i);
		}
	}
}

void main()
{
	print_to_98(12);
}