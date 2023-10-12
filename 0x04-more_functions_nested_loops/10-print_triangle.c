#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_triangle- multiplies 2 numbers.
 *
 * @size: A number.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */

void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            _putchar(' ');
        }

        for (j = 0; j < i + 1; j++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}
