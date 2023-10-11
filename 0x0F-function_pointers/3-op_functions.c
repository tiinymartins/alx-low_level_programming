#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of numbers
 * @a: number
 * @b: number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the difference
 * @a: number
 * @b: number
 * Return: the result from a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two numbers
 * @a: number
 * @b: number
 * Return: the result from a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of numbers
 * @a: number
 * @b: number
 * Return: the result from a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo of numbers
 * @a: number
 * @b: number
 * Return: the result from a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
