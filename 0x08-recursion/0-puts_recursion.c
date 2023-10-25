#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion- Checks if a character is a letter.
 *
 * @s: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    s++;
    _puts_recursion(s);
}
