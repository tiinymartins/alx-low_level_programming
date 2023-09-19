#include "main.h"

/**
 * swap_int - entry point
 * @a: num1
 * @b: num2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
