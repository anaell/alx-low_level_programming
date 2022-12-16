#include "main.h"

/**
 * main - this program solves the fizzbuzz test.
 * 
 * Return: (0)
*/
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            _putchar('Fizz');
        }
        else if (i % 5 == 0)
        {
            _putchar('Buzz');
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            _putchar('FizzBuzz');
        }
        else
        {
            _putchar(i);
        }
    }
    return (0);
}