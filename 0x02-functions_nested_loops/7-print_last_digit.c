#include "main.h"
/**
 * print_last_digit - print last digit
 * @v: parameter
 * Return: p
 */

int print_last_digit(int v)
{
	int p;

	p = v % 10;
	if (p < 0)
		p = -p;
	_putchar(p + '0');
	return (p);
}
