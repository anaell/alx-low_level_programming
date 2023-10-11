#include "main.h"

/**
 * print_sign - function to check the sign of a number.
 *
 * @e: the test number
 *
 * Return: (1)
 */
int print_sign(int e)
{
	if (e > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (e == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (e < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');

	}
}
