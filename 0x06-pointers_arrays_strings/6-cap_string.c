#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * cap_string- Checks if a character is a letter.
 *
 * @str: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
char *cap_string(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= ('a' - 'A');
			else
			{
				for (j = i - 1; j >= 0; j--)
				{
					if (str[j] == ' ' || str[j] == '\t' || str[j] == '\n' || str[j] == ',' || str[j] == ';' || str[j] == '.' || str[j] == '!' || str[j] == '?' || str[j] == '"' || str[j] == '(' || str[j] == ')' || str[j] == '{' || str[j] == '}')
						break;
				}
				if (j < 0)
					str[i] -= ('a' - 'A');
			}
		}
	}

	return (str);
}