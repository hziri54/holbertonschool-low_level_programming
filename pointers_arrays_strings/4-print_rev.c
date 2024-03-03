#include "main.h"

/**
 *
 * print_rev - entry point
 * @s: string
 * Description: write a character string that prints backwards
 * Return: 0 for success.
 **/

void print_rev(char *s)
{
	int len = 0;
	int i = 0;
	
	while (s[len])
	{
		len++;
	{
	
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
