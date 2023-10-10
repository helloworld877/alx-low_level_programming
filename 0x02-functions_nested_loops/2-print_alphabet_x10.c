#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
