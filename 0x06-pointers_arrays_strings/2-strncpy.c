#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: value 1
 * @src: value 2
 * @n: value 3
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
