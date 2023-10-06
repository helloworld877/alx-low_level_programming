#include <stdio.h>

int main(void)
{
	int tens_digit, ones_digit;

	for (tens_digit = 0; tens_digit <= 9; tens_digit++)
	{
		for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
		{
			putchar(tens_digit + '0');
			putchar(ones_digit + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}