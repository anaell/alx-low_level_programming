#include "main.h"

/**
 * print_rev - this function prints a string in reverse.
 *
 * @s: the string to be printed in reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{}

	a = i;

	for (a = i; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
}
