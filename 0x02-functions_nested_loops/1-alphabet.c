#include "main.h"

/**
 * print_alphabet - function to print alphabets in lower case
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a' ; m <= 'z'  ; m++)
		_putchar(m);
	_putchar('\n');
}
