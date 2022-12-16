#include "main.h"

/**
 * print_diagonal - this function draws a diagonal line on the
 * terminal.
 * @n: number of times the '\' character should be printed.
*/
void print_diagonal(int n)
{
    int a;
    int b;

    if (n > 0)
    {
    for (a = 0; a < n; a++)
    {
        while (b < a)
        {
            b = 0;
            _putchar(' ');
            b++;
        }
        _putchar('\\');
        _putchar('\n');
    }
    }
    else
    {
        _putchar('\n');
    }
    
}