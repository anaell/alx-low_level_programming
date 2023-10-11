#include "main.h"

/**
 * main - this function prints '_putchar'
 *
 * Return: (0)
 */
int main(void) {
	char tarp[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(tarp[i]);
	}
	_putchar('\n');
	return (0);
}
