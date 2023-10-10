#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * jack_bauer- prints last digit.
 *
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour + '0');
			if (hour < 10)
			{
				_putchar(hour + '0');
			}
			_putchar(':');

			_putchar(minute + '0');
			if (minute < 10)
			{
				_putchar(minute + '0');
			}
		}
		_putchar('\n');
	}
}
