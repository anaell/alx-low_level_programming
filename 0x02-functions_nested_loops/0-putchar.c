#include "main.h"

/**
 * main - this function prints '_putchar'
 *
 * Return: (0)
 */
int main(void)
{
	char tar[] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
		{
		_putchar(tar[0]);
		}
	_putchar("\n");
	return (0);
}
