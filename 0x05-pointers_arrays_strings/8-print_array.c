#include "main.h"

/**
 * print_array - entry point
 * @a: parameter1
 * @n: parameter2
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
