#include "main.h"

/**
 * print_square - this function prints a square
 * @size: the size of the square
 *
 * Return: void
*/
void print_square(int size)
{
int i;
int j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}

_putchar('\n');
}

}
else
{
_putchar('\n');
}

}
