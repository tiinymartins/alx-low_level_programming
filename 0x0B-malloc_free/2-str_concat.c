#include "main.h"

/**
 * str_concat - entry
 * @s1: char 1
 * @s2: char 2
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int w, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	w = ci = 0;
	while (s1[w] != '\0')
		w++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (w + ci + 1));

	if (conct == NULL)
		return (NULL);
	w = ci = 0;
	while (s1[w] != '\0')
	{
		conct[w] = s1[w];
		w++;
	}

	while (s2[ci] != '\0')
	{
		conct[w] = s2[ci];
		w++, ci++;
	}
	conct[w] = '\0';
	return (conct);
}
