#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function.
 * @array: the array.
 * @size: the size of array.
 * @action: pointer
 * Return: ..
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
