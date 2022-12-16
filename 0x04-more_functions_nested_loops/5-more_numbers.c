#include "main.h"

/**
 * more_numbers - this function prints numbers 0 to 14 10times.
*/
void more_numbers(void)
{
int lines, n, repeat, limit;

n = '0';
repeat = 0;
limit = '9';

for (lines = 0; lines < 10; lines++)
{
while (repeat < 2)
{
while (n <= limit)
{
if (limit == '4')
_putchar('1');
_putchar(n);
n++;
}
repeat++;
limit = '4';
n = '0';
}
_putchar('\n');
repeat = 0;
n = '0';
limit = '9';
}
}
