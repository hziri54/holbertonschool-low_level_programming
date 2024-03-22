#include "main.h"
/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * Return : c
 *
 * @c: pointer
 */
char *cap_string(char *c)
{
	int a, b;
	int l = 13;
	char t[] = {'\t', '\n', ';', '!', '?', '"', '(', ')', '{', '}', 32, 44, 46};

	for (a = 0; c[a];a++)
	{
	}
	for (b = 0; b < l;b++)

	if ((a == 0 || c[a - 1] == t[b]) && (c[a] >= 97 && c[a] <= 122))
			c[a] -= 32;
	b++;
	a++;

	return (c);
}
