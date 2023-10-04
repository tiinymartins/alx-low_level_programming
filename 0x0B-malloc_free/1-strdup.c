#include "main.h"

/**
 * _strdup - entry
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *sss;
	int y, t = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	sss = malloc(sizeof(char) * (y + 1));

	if (sss == NULL)
		return (NULL);
	for (t = 0; str[t]; t++)
		sss[t] = str[t];
	return (sss);
}
