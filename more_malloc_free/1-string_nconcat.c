#include "main.h"


/**
 * string_nconcat - Write a function that concatenates two strings.
 *
 * @s1: char ptr
 *
 * @s2: char ptr
 *
 * @n: unsigned int
 *
 * Return: a
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int lng = n, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b]; b++)
		lng++;

	a = malloc(sizeof(char) * (lng + 1));

	if (a == NULL)
		return (NULL);

	lng = 0;

	for (b = 0; s1[b]; b++)
		a[lng++] = s1[b];

	for (b = 0; s2[b] && b < n; b++)
		a[lng++] = s2[b];

	a[lng] = '\0';

	return (a);
}
