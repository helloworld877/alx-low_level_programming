#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * reverse_array- Checks if a character is a letter.
 *
 * @a: A pointer.
 * @n: A number.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}