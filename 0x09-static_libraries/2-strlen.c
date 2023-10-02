#include "main.h"

/**
 * _strlen - entry point
 * @s: parameter
 * Return: length
 */
int _strlen(char *s)
{
	int n;
	int count = 0;

	for (n = 0 ; s[n] != '\0' ; n++)
		count++;
	return (count);
}
