#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always  void
 */

int main(void)
{
	int sum = 0;
	int m;

	for (m = 0 ; m < 10 ; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
			sum = sum + m;
	}

	printf("%d\n", sum);
}
