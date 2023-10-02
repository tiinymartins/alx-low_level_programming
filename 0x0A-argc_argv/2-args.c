#include "main.h"

/**
 * main - entry
 * @argc: arguments
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
