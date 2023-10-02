#include "main.h"
/**
 * _memset - entry point
 * @s: value
 * @b: value
 * @n: parameter
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int h = 0;

	for (; n > 0; h++)
	{
		s[h] = b;
		n--;
	}
	return (s);
}
