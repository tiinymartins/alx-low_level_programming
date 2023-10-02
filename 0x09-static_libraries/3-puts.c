#include "main.h"

/**
 * _puts - entry point
 * @str: parameter
 * Return: void
 */
void _puts(char *str)
{
	int t;

	for (t = 0 ; str[t] != '\0' ; t++)
		_putchar(str[t]);
	_putchar('\n');
}
