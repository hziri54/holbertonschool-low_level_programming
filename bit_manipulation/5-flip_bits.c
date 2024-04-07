#include "main.h"

/**
 * flip_bits -  the number of bits you would
 *             need to flip to get from one number to another.
 * @n: number
 *
 * @m: number to flip
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	for (; xor > 0; xor >>= 1)
	{
		bits += (xor & 1);
	}

	return (bits);
}
