#include "main.h"
/**
 * _memcpy - entry point
 * @dest: value
 * @src: value
 * @n: parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int g = n;

	for (; p < g; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
