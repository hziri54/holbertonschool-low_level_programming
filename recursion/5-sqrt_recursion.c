#include "main.h"
/**
 * _sqrt_recursion - Write a function that returns square root of a number
 *
 * Return: power of y
 *
 * @n: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - racine carrÃe
 *
 * @n: int
 *
 * @a: int
 *
 * Return: _sqrt
 */
int _sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (_sqrt(n, a + 1));
}
