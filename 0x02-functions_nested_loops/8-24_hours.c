#include "main.h"
/**
 * jack_bauer - print the time
 * Return: void
 */

void jack_bauer(void)
{
	int n, h;

	for (n = 0 ; n < 24 ; n++)
	{
		for (h = 0 ; h < 60 ; h++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar('\n');
		}
	}
}
