#include <stdio.h>

/**
 * main - thsi function sums up the even fibonacci numbers
 * less than 4,000,000.
 *
 * Return: (0)
 */
int main(void)
{
	unsigned long int sum = 0, sum1 = 0, num1 = 1, num2 = 2;

	while (sum < 4000000)
	{
		sum1 = num1 + num2;
		num1 = num2;
		num2 = sum1;
		if (sum1 % 2 == 0)
			sum += sum1;
	}
	printf("ul%\n", sum);
	return (0);
}
