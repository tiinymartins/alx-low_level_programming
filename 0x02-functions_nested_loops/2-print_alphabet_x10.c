#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int b;
	char m;

	for (b = 1 ; b <= 10 ; b++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
			_putchar(m);
		_putchar('\n');
	}
}
