#include "main.h"

/**
 * print_line - entry point
 *
 * Description: function that draws a straight line in the terminal
 *
 * Return: 0 for sucess.
 */

void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
