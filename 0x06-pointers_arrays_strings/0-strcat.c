#include "main.h"

/**
 * _strcat - this function concatenates two strings.
 * 
 * @dest: the first string
 * @src: the second string
 * 
 * Return: (char)
*/
char *_strcat(char *dest, char *src)
{
	char word[];
	int i, u;

	for (i = 0; dest[i] != '\0'; i++)
	{
		word[i] = dest[i];
	}

	for (u = 0; src[u] != '\0'; u++)
	{
		*(word + i + u) = src[u];
	}

	_putchar(word);
}
