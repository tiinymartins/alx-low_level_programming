#include "main.h"

/**
 * _strcat -  entry point
 * @dest: num 1
 * @src: num 2
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int p;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[m] = src[p];
		m++;
		p++;
	}

	dest[m] = '\0';
	return (dest);
}
