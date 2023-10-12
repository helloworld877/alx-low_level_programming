#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * void print_diagonal- multiplies 2 numbers.
 *
 * @n: A number.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

void print_diagonal(int n)
{
    int i, j, tens, units;

    if (n <= 0)
    {
        _putchar('\n');
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
