#include "main.h"

/**
 * _atoi - convert to integer
 * @s: string
 * Return: int converted
 */

int _atoi(char *s)
{
	int i, d, n, len, g, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	g = 0;
	digit = 0;


	while (s[len] != '\0')
		len++;
	while (i < len && g == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			g = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			g = 0;
		}
		i++;
	}
	if (g == 0)

		return (0);
	return (n);
}

/**
 * main - entry numbers
 * @argc: arguments
 * @argv: array
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
