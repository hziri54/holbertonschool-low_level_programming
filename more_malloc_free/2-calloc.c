#include "main.h"

/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 *
 * @nmemb: int
 *
 * @size: int
 *
 * Return: a
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *br;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	br = a;

	for (i = 0; i < (size * nmemb); i++)
		br[i] = '\0';

	return (a);
}
