#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - write a function that returns a pointer to 2 dimensions.
 *
 * @width: int
 *
 * @height: int
 *
 * Return: ptr
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));

		if (a[b] == NULL)
		{
			for (; b >= 0; b--)
				free(a[b]);

			free(a);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			a[b][c] = 0;
	}
	return (a);
}
