#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition of two int
 *
 * @a: int to addition
 *
 * @b: int to addition
 *
 * Return: Result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction two int
 *
 * @a: int to subtraction
 *
 * @b: int to subtraction
 *
 * Return: Result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication two int
 *
 * @a: int to multiplication
 *
 * @b: int to multiplication
 *
 * Return: Result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two int
 *
 * @a: int to division
 *
 * @b: int to division
 *
 * Return: Result of divison
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division
 *
 * @a: number of remainder
 *
 * @b: number of remainder
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
