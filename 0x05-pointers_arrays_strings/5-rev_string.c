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
	char end_char, first_char;
	int i, end_char_posi, first_char_posi;

	for (i = 0; s[i] != '\0'; i++)
	{}

	end_char_posi = i - 1;
	first_char_posi = end_char_posi / 2;

	while (first_char_posi >= 0)
	{
		first_char = s[end_char_posi - first_char_posi];
		end_char = s[first_char_posi];
		s[first_char_posi] = first_char;
		s[end_char_posi - first_char_posi] = end_char;
		first_char_posi--;
	}
}
