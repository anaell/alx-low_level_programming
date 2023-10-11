#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - this functions prints from any
 * number to 98.
 *
 * @n: test number.
 *
 * Return: (0)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
