#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * swap_int- Checks if a character is a letter.
 *
 * @a: A pointer.
 * @b: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void swap_int(int *a, int *b)
{
    int x;

    x = *a;
    *a = *b;
    *b = x;
}
