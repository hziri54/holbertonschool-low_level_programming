#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source
 * @n: number
 * Return: print the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int srclen = 0;

	while (src[index++])
	{
		srclen++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = srclen; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
