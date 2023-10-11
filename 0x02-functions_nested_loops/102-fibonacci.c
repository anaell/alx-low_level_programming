#include <stdio.h>

/**
 * main - this function prints the first 50 fibonacci numbers
 * starting with 1 and 2.
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	unsigned long int num1, num2, num3;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;
		printf("%lu", num3);

		num1 = num2;
		num2 = num3;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
