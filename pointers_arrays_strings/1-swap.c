#include "main.h"

/**
 * swap - entry point 
 *
 * Description: exchange the values of 2 integers
 *
 * Return: 0 for sucess.
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a + *b;
	*b = temporary ;
}
