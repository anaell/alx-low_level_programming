#include "main.h"

/**
 * islower - function that checks whether a letter is lowercase or not,
 * returns 1 if lower else 0.
 *
 * Returns: (0)
 */
int islower(int m)
{
	if (m >= 'a' && m <= 'z' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
