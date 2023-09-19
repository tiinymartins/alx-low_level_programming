#include "main.h"

/**
 * puts_half - entry point
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
	int q, g, length = 0;

	for (q = 0 ; str[q] != '\0' ; q++)
		length++;
	g = (length - 1) / 2;
	for (q = g + 1; str[q] != '\0' ; q++)
		_putchar(str[q]);
	_putchar('\n');
}
