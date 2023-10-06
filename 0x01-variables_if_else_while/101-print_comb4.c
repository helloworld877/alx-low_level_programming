#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens_digit, ones_digit, hundred_digit;

	for (hundred_digit = 0; hundred_digit <= 9; hundred_digit++)
	{
		for (tens_digit = hundred_digit + 1; tens_digit <= 9; tens_digit++)
		{
			for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
			{
				putchar(hundred_digit + '0');
				putchar(tens_digit + '0');
				putchar(ones_digit + '0');

				if (!((hundred_digit == 7 && tens_digit == 8 && ones_digit == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
