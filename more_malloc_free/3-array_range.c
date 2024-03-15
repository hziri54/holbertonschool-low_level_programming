#include "main.h"

/**
 * array_range - Write a function that creates an array of integers.
 *
 * @min: int
 *
 * @max: int
 *
 * Return: a
 */

int *array_range(int min, int max)
{
	int *a, b = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

		if (a == NULL)
			return (NULL);

	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}

	return (a);
}
