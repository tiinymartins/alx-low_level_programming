#include "main.h"
/**
 * print_chessboard - entry
 * @a: input
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int y;
	int z;

	for (y = 0; z < 8; y++)
	{
		for (z = 0; z < 8; z++)
			putchar(a[y][z]);
		putchar('\n');
	}
}
