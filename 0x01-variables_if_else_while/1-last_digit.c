#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
	{
		printf("greater than 5 and not 0\n");
	}
	if (last_digit == 0)
	{
		printf("0\n");
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
