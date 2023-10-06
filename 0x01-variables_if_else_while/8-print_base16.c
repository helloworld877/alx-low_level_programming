#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x;
    char hex_chars[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    for (x = 0; x < 16; x++)
    {
        putchar(hex_chars[x]);
    }

    putchar('\n');
    return (0);
}
