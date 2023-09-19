#include "main.h"

/**
 * _strcpy - entry point
 * @dest: destination
 * @src: parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0 ; src[v] != '\0' ; v++)
		dest[v] = src[v];
	dest[v] = '\0';
	return (dest);
}
