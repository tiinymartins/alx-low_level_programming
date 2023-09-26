#include "main.h"

/**
 * print_diagsums - entry
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, h;

	num1 = 0;
	num2 = 0;

	for (h = 0; h < size; h++)
	{
		num1 = num1 + a[h * size + h];
	}
	for (h = size - 1; h >= 0; h--)
	{
		num2 += a[h * size + (size - h - 1)];
	}
	printf("%d, %d\n", num1, num2);
}
