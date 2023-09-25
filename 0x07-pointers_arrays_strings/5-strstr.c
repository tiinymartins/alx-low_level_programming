#include "main.h"

/**
 * _strstr - entry
 * @haystack: value
 * @needle: value
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *b = haystack;
		char *v = needle;

		while (*b == *v && *v != '\0')
		{
			b++;
			v++;
		}

		if (*v == '\0')
			return (haystack);
	}
	return (0);
}
