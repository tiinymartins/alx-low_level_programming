#include "main.h"
/**
 * _pow - funcution calculate base and power
 * @base: the base
 * @power: power of exponent
 *
 * Return: value of base and power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int v;

	num = 1;
	for (v = 1; v <= power; v++)
		num *= base;
	return (num);
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int start, previous;
	char ment;

	ment = 0;
	start = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (start != 0)
	{
		previous = n & start;
		if (previous == start)
		{
			ment = 1;
			_putchar('1');
		}
		else if (ment == 1 || start == 1)
		{
			_putchar('0');
		}
		start >>= 1;
	}
}
