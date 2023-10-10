#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
    int result = n % 10;
    if (result < 1)
    {
        result = result * -1;
    }
    _putchar(result + '0');
    return (result);
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
