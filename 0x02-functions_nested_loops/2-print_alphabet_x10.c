#include "main.h"

/**
 * print_alphabet_x10 - print all lower case letters 10times
 * line by line.
 *
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int p;

	p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		_putchar('\n');
	}
}
