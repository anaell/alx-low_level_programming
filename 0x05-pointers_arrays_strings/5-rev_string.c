#include "main.h"

/**
 * rev_string - this function reverses a string.
 *
 * @s: string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	char str[] = "";
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{}

	a = i;
	for (a -= 1; a <= 0; a--)
	{
		str += s[a];
	}
	s = str;
}
