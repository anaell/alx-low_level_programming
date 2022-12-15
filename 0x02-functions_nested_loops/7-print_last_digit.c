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

	if (x < 0)
	{
		x = x * -1;
	}

	return (x % 10);
}
