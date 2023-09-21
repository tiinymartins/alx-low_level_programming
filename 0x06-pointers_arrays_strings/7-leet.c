#include "main.h"

/**
 * leet - encode
 * @n: parameter
 * Return: n
 */
char *leet(char *n)
{
	int e, x;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (e = 0; n[e] != '\0'; e++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[e] == s1[x])
			{
				n[e] = s2[x];
			}
		}
	}
	return (n);
}
