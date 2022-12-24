#include "main.h"

/**
 * puts_half - this function prints half of a string.
 *
 * @str: string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, last, half;

	for (i = 0; str[i] != '\0'; i++)
	{}

	last = i;

	if (last % 2 == 0)
	{
		half = last / 2;

		while (half <= last)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
	else
	{
		half = (last - 1) / 2;
		while (half <= last)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
}
