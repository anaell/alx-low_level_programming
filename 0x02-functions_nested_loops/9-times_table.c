#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0.
*/
void times_table(void)
{
int a;
int b;
int c;
int tens;
int units;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
tens = c / 10;
units = c % 10;

if (b == 0)
{
_putchar('0');
}
else if (c < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(units + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(units + '0');
}
}
_putchar('\n');
}
}
