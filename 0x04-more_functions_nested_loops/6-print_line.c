#include "main.h"

/**
 * print_line - this function draws a straight line in the
 * terminal.
 * @n: number of times '_' is to be drawn.
*/
void print_line(int n)
{
    int c;

    c = 0;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while (c < n)
        {
            _putchar('_');
            c++;
        }    
    }
}