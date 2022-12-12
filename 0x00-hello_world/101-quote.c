#include <stdio.h>

#include <unistd.h>



/**
 * main - The function print a quote
 * 
 * This code prints Dora's quote.
 * Always adhere to the rule max numbe of characters.
 * Things can happen and you'll not keep it though.
 *
 * Return: 1
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
