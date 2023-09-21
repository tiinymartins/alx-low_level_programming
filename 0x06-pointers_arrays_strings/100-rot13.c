#include "main.h"

/**
 * rot13 - encode a string
 * @s: parameter
 * Return: *s
 */

char *rot13(char *s)
{
	int m;
	int h;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (h = 0; h < 52; h++)
		{
			if (s[m] == data1[h])
			{
				s[m] = datarot[h];
				break;
			}
		}
	}
	return (s);
}
