#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_chessboard- Checks if a character is a letter.
 *
 * @a: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		printf("\n");
	}
}
