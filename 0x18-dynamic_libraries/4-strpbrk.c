#include "main.h"
/**
 * _strpbrk - entry
 * @s: value
 * @accept: value
 * Return:  pointer to the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int o;

	while (*s)
	{
		for (o = 0; accept[o]; o++)
		{
			if (*s == accept[o])
				return (s);
		}
		s++;
	}
	return ('\0');
}
