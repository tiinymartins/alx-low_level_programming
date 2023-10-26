#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, countbit = 0;
	unsigned long int start;
	unsigned long int previous = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		start = previous >> y;
		if (start & 1)
			countbit++;
	}
	return (countbit);
}
