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
	int last_digit = x % 10;

	if (x < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
