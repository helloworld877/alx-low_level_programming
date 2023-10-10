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
    long a = 1, b = 2, next, i;

    printf("%ld, %ld", a, b);
    for (i = 0; i < 96; i++)
    {
        next = a + b;
        printf(", %ld", next);

        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}
