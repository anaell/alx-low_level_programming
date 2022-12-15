#include "main.h"

/**
 * _abs - function that prints the absolute value of an integer.
 *
 * @f: test number.
 *
 * Return: (0)
 */
int _abs(int f)
{
	if (f < 0)
	{
		f = f * -1;
	}
	return (f);
}
