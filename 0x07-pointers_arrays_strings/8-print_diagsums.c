#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_diagsums- Checks if a character is a letter.
 *
 * @a: A pointer.
 * @size: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void print_diagsums(int *a, int size)
{
    int i, sum1, sum2;

    sum1 = 0;
    sum2 = 0;
    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];
        sum2 += a[(size - 1 - i) * size + i];
    }
    printf("%d, %d\n", sum1, sum2);
}
