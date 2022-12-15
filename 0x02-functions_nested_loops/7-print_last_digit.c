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
	int p;

	p = x % 10;
	_putchar(x % 10);
	return (p);
}
