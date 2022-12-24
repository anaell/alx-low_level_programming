#include <stdio.h>
#include "main.h"

/**
 * print_array - this function prints the elements of an array of integers.
 *
 * @a: the array to be printed.
 * @n: number of elements of the array.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, g;

	n = n - 1;

	for (i = 0; a[i] != '\n'; i++)
	{}
	for (g = 0; g <= n; g++)
	{
		if (g == n)
		{
			printf("%d", a[g]);
		}
		else
		{
			printf("%d, ", a[g]);
		}
	}

	printf("\n");

}
