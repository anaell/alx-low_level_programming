#include "main.h"

/**
 * print_alphabet - prints all lowercase letters.
 *
 * Return: (0)
 */
void print_alphabet(void)
{
	int p;

	p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');
}
