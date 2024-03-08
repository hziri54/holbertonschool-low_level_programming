#include "main.h"
/**
 * factorial - Write a function that prints a string.
 *
 * Return: n
 *
 * @n: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
