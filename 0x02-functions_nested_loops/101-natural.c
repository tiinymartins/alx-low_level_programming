#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int sum = 0;
	int m;

	for (m = 0 ; m < 1024 ; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
			sum = sum + m;
	}

	printf("%d\n", sum);
	return (0);
}
