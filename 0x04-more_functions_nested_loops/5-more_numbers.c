#include "main.h"

/**
 * more_numbers - this function prints numbers 0 to 14 10times.
*/
void more_numbers(void)
{
    int i;
    int c;

    while (c <= 10)
    c = 1;
    {
        for (i = 0; i < 15; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
        c++;
    }
}