#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function is used to check if
 * a number is positive or negative.
 *
 * Description - Please ensure to follow betty's styling and code
 * arrangements, etc.
 * Also remember the 80 character limit for a line thoough there
 * are exceptions.
 *
 * Return: (0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
