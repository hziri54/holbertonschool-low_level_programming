#include "main.h"

/**
 * rev_string
 *
 * @s: string
 *
 * Description: starting with the first character, followed by a new line.
 *
 * Return: 0 for sucess
 */

void puts2(char *str)
{
	int a, b;

	for (b = 0; str[b] != '\0'; b++)
	{
	}

	for (a = 0; a < b; a+=2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
