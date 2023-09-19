#include "main.h"

/**
 * _atoi - entry point
 * @s: parameter
 *
 * Return: converted
 */
int _atoi(char *s)
{
	int x, a, b, len, c, digit;

	x = 0;
	a = 0;
	b = 0;
	len = 0;
	c = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && c == 0)
	{
		if (s[x] == '-')
			++a;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (a % 2)
				digit = digit;
			b = b * 10 + digit;
			c = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			c = 0;
		}
		x++;
	}

	if (c == 0)
		return (0);

	return (b);
}
