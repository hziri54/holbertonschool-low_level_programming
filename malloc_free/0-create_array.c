#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 *
 * @size: int
 *
 * @c: char
 *
 * Return: c
 *
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return ('\0');
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return ('\0');
	}
	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}

	return (a);
}
