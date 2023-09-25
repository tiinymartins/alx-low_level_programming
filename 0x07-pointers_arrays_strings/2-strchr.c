#include "main.h"
/**
 * _strchr - entry
 * @s: value
 * @c: value
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
