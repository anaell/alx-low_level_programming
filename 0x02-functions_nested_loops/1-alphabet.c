#include "main.h"

/**
 * main - prints all lowercase letters.
 *
 * Return: (0)
 */
int main(void)
{
	print_alphabet();
}

void print_alphabet(void)
{
	int p;
	p = 'a';
	while (p <= 'z')
	{
		_putchar(p);
		p++
	}
}
