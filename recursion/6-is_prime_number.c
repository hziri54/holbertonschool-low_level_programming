#include "main.h"
/**
 * is_prime_number - Write a function that returns prime number
 *
 * Return: prime number
 *
 * @n: int
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - prime
 *
 * @n: int
 *
 * @a: int
 *
 * Return: prime
 */
int prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (prime(n, a + 1));
}
