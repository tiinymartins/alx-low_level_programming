#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * passwords 101-crackme
 *
 * Return: 0 always
 */

int main(void)
{
	int pass[100];
	int v, num, p;

	num = 0;

	srand(time(NULL));

	for (v = 0; v < 100; v++)
	{
		pass[v] = rand() % 78;
		num += (pass[v] + '0');
		putchar(pass[v] + '0');
		if ((2772 - num) - '0' < 78)
		{
			p = 2772 - num - '0';
			num += p;
			putchar(p + '0');
			break;
		}
	}

	return (0);
}
