#include "main.h"
/**
 * _pow_recursion - Write a function that returns the value of x to power of y.
 *
 * Return: power of y
 *
 * @x: int
 *
 * @y: int
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
