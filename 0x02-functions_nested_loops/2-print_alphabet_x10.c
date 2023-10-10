#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

    for (int j = 0; j < 10; j++)
    {
        for (int i = 'a'; i <= 'z'; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
    }
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}
