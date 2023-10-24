#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strspn- Checks if a character is a letter.
 *
 * @s: A pointer.
 * @accept: A pointer.
 *
 * Return:
 * True if the character is lowercase, False otherwise.
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i;
	unsigned int j;

	i = 0;
	while (*s != '\0')
	{
		bool found;

		found = false;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		i++;
		s++;
	}
	return (i);
}
