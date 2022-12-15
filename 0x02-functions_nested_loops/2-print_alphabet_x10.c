#include "main.h"

/**
 * print_alphabet_x10 - print all lower case letters 10times
 * line by line.
 *
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int i;

	i = 1;

	while (i <= 10)
	{
		int p;

		p = 'a';

		while (p <= 'z')
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		i++;
	}
}
