#include "main.h"
/**
 * _strlen_recursion - Write a function that prints a string.
 *
 * Return: _strlen_recursion
 *
 * @s: pointer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
