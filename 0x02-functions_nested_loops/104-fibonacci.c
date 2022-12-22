#include <stdio.h>

/**
 * main - this funtion prints the first 98 fibonacci numbers
 * starting with 1 and 2.
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	unsigned long int sum, num1 = 0, num2 = 1;

	for (i = 0; i < 98; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (i < 97)
			printf(", ");
	}
	return (0);
}
