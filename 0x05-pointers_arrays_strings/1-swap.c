#include "main.h"

/**
 * swap_int - this function swaps the values of two integers.
 *
 * @*a: the first interger.
 * @*b: the second integer.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
