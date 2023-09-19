#include "main.h"

/**
 * puts2 - entry point
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int e;

	for (e = 0 ; str[e] != '\0' ; e++)
	{
		if (e % 2 == 0)
			_putchar(str[e]);
	}
	_putchar('\n');
}
