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
	for (; *str != '\0'; str++)
	{
		_putchar(*str + i);
	}
	_putchar('\n');
}
