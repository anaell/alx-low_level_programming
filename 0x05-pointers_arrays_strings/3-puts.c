#include "main.h"

/**
 * _puts - this function prints a string to stdout.
 *
 * @str: the string to print out.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(i + '0');
	}
	_putchar("\n");
}
