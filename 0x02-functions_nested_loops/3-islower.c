#include "main.h"

/**
 * _islower - function that checks whether a letter is lowercase or not,
 * returns 1 if lower else 0.
 *
 * @m: the character to test.
 *
 * Return: (0)
 */
int _islower(int m)
{
	if (m >= 'a' && m <= 'z')
		return (1);
	else
		return (0);
}
