#include <stdio.h>

/**
 * main - this is to print out the size of characters.
 *
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're totally free to use several lines to properly
 * describe your function
 *
 *Return: 0
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
return (0);
}
