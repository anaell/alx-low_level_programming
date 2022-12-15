#include "main.h"

/**
 * jack_bauer - this function prints every minute of the day.
 *
 * Return: (0);
 */
void jack_bauer(void)
{
	int hour;
	int sec;
	int h1;
	int s1;

	hour = 24;
	sec = 60;

	while (h1 < hour)
	{		
		h1 = 0;
		if (h1 < 10)
		{
			h1 = '0' + h1;
		}

		for (s1 = 0; s1 < sec; s1++)
		{
			if (s1 < 10)
			{
				s1 = '0' + s1;
			}
			_putchar(h1);
			_putchar(':');
			_putchar(s1);
			_putchar('\n');
		}
		h1++;
	}
}
