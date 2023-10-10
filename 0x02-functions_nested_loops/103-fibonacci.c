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
int main()
{
    long a = 1, b = 2, sum = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
        {
            sum += b;
        }

        long next;

        next = a + b;
        a = b;
        b = next;
    }

    printf("%ld\n", sum);

    return 0;
}