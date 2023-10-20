#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * leet- Checks if a character is a letter.
 *
 * @str: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet_chars[] = {'a', 'e', 'o', 't', 'l'};
	char leet[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_chars[j] || str[i] == (leet_chars[j] - ('a' - 'A')))
				str[i] = leet[j];
		}
	}

	return (str);
}
