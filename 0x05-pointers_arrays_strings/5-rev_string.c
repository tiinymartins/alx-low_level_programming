#include "main.h"

/**
 * rev_string - entry point
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int z;
	int loop = 0;

	for (z = 0 ; s[z] != '\0' ; z++)
		loop++;
	for (z = 0 ; z < loop / 2 ; z++)
	{
		char r;

		r = s[z];
		s[z] = s[loop - 1 - z];
		s[loop - 1 - z] = r;
	}
}
