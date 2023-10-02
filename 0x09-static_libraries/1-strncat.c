#include "main.h"

/**
 * _strncat - entry point
 * using the most n bytes from src
 * @dest: value
 * @src: value
 * @n: parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y;
	int h;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
		dest[y] = src[h];
		y++;
		h++;
	}
	dest[y] = '\0';
	return (dest);
}
