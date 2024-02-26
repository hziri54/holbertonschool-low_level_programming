#include "main.h"

/**
 * print_diagonal - entry point
 *
 * @n: number 
 *
 * Description: writing a diagonal function 
 *
 * Return: 0 for sucess.
 */

void print_diagonal(int n)
{
	int count;
	int space;

	if (n > 0)
	{
		for (count  = 0; count < n; count++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}else
{
	_putchar('\n');
}
