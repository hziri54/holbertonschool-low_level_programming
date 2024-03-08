#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of the two diagonals.
 *
 * Return: ..
 *
 * @a: int
 *
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int b, y = 0, z = 0;

	for (b = 0; b < size; b++)
	{
		y += a[b];
		a += size;
	}
	a -= size;
	for (b = 0; b < size; b++)
	{
		z += a[b];
		a -= size;
	}
	printf("%d, %d\n", y, z);
}
