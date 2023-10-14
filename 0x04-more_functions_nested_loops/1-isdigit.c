#include "main.h"

/**
 * _isdigit - function checks for a digit.
 * @c: test digit.
 * 
 * Return: (1) if digit, (0) if otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
