#include "main.h"
/**
 * _print_rev_recursion - Construct a function that outputs a string backwards.
 *
 * Return: s
 *
 * @s: pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
