#include "main.h"
/**
 * int factorial - Entry point
 * @n: the number to calculate factorial
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
