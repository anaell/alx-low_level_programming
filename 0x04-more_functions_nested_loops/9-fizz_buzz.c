#include <stdio.h>
#include "main.h"

/**
 * main - this program solves the fizzbuzz test.
 * 
 * Return: (0)
*/
int main(void)
{
    int i;

    for (i = 1; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");

        return (0);
}
