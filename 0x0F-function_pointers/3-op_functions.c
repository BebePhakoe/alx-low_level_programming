#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Entry point
 * @a: first number
 * @b: second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Entry point
 * @a: first number
 * @b: second number
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Entry point
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- Entry point
 * @a: first number
 * @b: second number
 * Return: The quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Entry point
 * @a: first number
 * @b: second number
 * Return: The remainder of divsion of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
