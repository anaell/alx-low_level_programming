#include "main.h"

/**
 * print_line - this function draws a straight line in the
 * terminal.
 * @n: number of times '_' is to be drawn.
*/
void print_line(int n)
{
int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
