#include "main.h"

/**
 * string_toupper - lower cases
 * @n: value
 * Return: n
 */

char *string_toupper(char *n)
{
	int k;

	k = 0;
	while (n[k] != '\0')
	{
		if (n[k] >= 'a' && n[k] <= 'z')
			n[k] = n[k] - 32;
		k++;
	}
	return (n);
}
