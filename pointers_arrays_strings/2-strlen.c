#include "main.h"

/**
 * _strlen - entry point
 *
 * @s: string
 *
 * Description: function that returns the length of a string of characters
 *
 * Return: 0 for success.
 */

int _strlen(char *s)
{
	int len;
	int index;

	len = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		len++;
	}
	return (len);
}
