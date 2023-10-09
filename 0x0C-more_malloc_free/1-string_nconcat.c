#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: input
 * @s2: input
 * @n: value
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int y;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (y = 0; s1[y] != '\0'; y++)
		s1len++;
	for (y = 0; s2[y] != '\0'; y++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (y = 0; s1[y] != '\0'; y++)
			output[y] = s1[y];
		for (y = 0; s2[y] != '\0'; y++)
			output[s1len + y] = s2[y];
		output[s1len + y] = '\0';
	}
	else
	{
		for (y = 0; s1[y] != '\0'; y++)
			output[y] = s1[y];
		for (y = 0; y < n; y++)
			output[s1len + y] = s2[y];
		output[s1len + y] = '\0';
	}
	return (output);
}
