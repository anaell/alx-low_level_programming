#include "main.h"

/**
 * print_last_digit - this function prints the last digit of a number.
 *
 * @x: number to be tested.
 *
 * Return: (0)
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		x = x * -1;
		_putchar((x % 10) + '0');
		return (x % 10);
	}
}
