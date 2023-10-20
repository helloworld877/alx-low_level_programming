#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncat- Checks if a character is a letter.
 *
 * @dest: A pointer.
 * @src: A pointer.
 * @n: A number.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
        ;

    for (j = 0; ((j < n) && (src[j] != '\0')); j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';

    return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}