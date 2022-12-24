#include "main.h"

/**
 * _strcpy - this function copies a string (src) into a buffer (dest).
 *
 * @src: the string to be copied.
 * @dest: the place to copy the string into.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0' || src[i] == '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	return (dest);
}
