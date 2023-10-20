#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * string_toupper- Checks if a character is a letter.
 *
 * @str: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *string_toupper(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ('a' - 'A');
    }

    return (str);
}