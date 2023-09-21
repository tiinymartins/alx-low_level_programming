#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: value
 * @n: value
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int g;
	int w;

	for (g = 0; g < n--; g++)
	{
		w = a[g];
		a[g] = a[n];
		a[n] = w;
	}
}
