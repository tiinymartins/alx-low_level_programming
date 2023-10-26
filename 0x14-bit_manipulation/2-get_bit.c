#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to check
 * @index: index
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int start, previous;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	start = 1 << index;
	previous = n & start;
	if (previous == start)
		return (1);
	return (0);
}
