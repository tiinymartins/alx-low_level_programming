#include "main.h"
/**
 * _strspn - entry
 * @s: value
 * @accept: value
 * Return: substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			{
				j++;
				break;
			}
			else if (accept[f + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
