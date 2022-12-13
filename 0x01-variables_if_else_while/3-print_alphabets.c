#include <stdio.h>

/**
 * main - A function that prints all the lower and
 * upper case letters.
 *
 *
 * Return: (0)
 */
int main(void)
{
char l;
char u;
l = 'a';
u = 'A';
while (l <= 'z')
{
	putchar(l);
	l++;
}
while (u <= 'Z')
{
	putchar(u);
	u++;
}
putchar("\n");
return 0;
}
