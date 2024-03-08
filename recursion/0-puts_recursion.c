#include "main.h"
/**
 * _puts_recursion - Create a function that outputs a text message.
 *
 * Return: s
 *
 * @s: pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
