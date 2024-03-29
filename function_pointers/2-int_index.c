#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: array
 *
 * @size: size of array
 *
 * @cmp : pointer comparaison
 *
 * Return: ..
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
