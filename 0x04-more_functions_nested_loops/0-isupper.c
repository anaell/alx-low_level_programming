#include "main.h"

/**
 * _isupper - this function checks if a
 * character is uppercase or not.
 * 
 * @c: the character to be checked.
 * 
 * Return: 1 if upper , 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
