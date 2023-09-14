#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int next;
	int m;

	printf("%lu, ", num1);
	for (m = 1 ; m < 50 ; m++)
	{
		printf("%lu", num2);
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		if (m != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
