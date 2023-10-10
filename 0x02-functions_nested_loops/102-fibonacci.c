#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long a = 1, b = 2, next;

	printf("%lld, %lld", a, b);
	for (int i = 0; i < 48; i++)
	{
		next = a + b;
		printf(", %lld", next);

		a = b;
		b = next;
	}

	printf("\n");

	return 0;
}
