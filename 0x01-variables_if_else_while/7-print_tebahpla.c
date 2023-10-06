#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 'Z'; x >= 'A'; x--)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}

	putchar('\n');
	return (0);
}
