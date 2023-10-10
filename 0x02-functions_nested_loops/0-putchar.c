#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	for (int i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}

	return 0;
}
