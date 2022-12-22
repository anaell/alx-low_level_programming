#include "main.h"

/**
 * print_times_table - this function prints the n times table.
 *
 * @n: the number of the times table.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int k;
	int j;
	int l;
	int m;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			for (j = 0; j <= n; j++)
			{
				l = j * k;
				_putchar(l + '0');
				_putchar(',');
				m = 0;
				while (m < 3)
				{
					_putchar(' ');
					m++;
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
