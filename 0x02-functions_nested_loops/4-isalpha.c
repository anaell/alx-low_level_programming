#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @a: the character to be tested.
 *
 * Return: (1)
 */
int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
