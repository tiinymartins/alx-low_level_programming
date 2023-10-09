#include "main.h"
/**
 * array_range - array of integers.
 * @min: input
 * @max: input
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int f, l;
	int *output;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	output = malloc(sizeof(int) * l);
	if (output == NULL)
		return (NULL);
	for (f = 0; f < l; f++)
	{
		output[f] = min;
		min++;
	}
	return (output);
}
