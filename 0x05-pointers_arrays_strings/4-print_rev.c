#include "main.h"

/**
 * print_rev - entry point
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int p;
	int print = 0;

	for (p = 0 ; s[p] != '\0' ; p++)
		print++;
	for (p = print - 1 ; p >= 0 ; p--)
		_putchar(s[p]);
	_putchar('\n');
}
