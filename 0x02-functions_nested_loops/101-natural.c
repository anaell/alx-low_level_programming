#include <stdio.h>
#include "main.h"

/**
 * main - this function summs the multiple of 3 or 5
 * less than 1024.
 *
 * Return: (0)
 */
int main(void)
{
	int num;
	
	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			num += num;
		}
	}
	return (0);
}
