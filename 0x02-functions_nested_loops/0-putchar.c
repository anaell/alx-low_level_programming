#include "main.h"

/**
 * main - this function prints '_putchar'
 *
 * Return: (0)
 */
int main(void)
{
	char t[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(t[i]);
	}
	_putchar('\n');
	return (0);
}
