#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit- prints last digit.
 *
 * @n: A number.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 1)
	{
		result = result * -1;
	}
	_putchar(result + '0');
	return (result);
}
