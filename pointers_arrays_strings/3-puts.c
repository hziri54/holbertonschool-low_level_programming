#include "main.h"

/**
 * _puts - entry point 
 *
 * @str: string 
 *
 * Description : write a function that prints a string of characters, followed by a new line
 *
 * Return: 0 for sucess.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('/n');
}
