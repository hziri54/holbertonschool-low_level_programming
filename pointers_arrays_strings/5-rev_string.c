#include "main.h"


/**
 * rev_string - entry point
 *
 * @s: string
 *
 * Description: function that inverts a string
 *
 * Return: 0 for success.
 */

void rev_string(char *s)
{
	int a, b, c;

	char temp;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	c = a - 1;

	for (b = 0; b < a / 2; b++)
	{
	temp = s[b];
	s[b] = s[c];
	s[c] = temp;
	c--;
	}

}
