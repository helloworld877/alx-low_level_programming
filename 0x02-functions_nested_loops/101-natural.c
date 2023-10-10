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
    int i;
    int x;

    x = 0;
    for (i = 0; i < 1024; i++)
    {
        if ((i % 5 == 0) || (i % 3 == 0))
        {
            x += i;
        }
    }

    printf(x);
    return (0);
}
