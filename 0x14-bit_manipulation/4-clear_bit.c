#include "main.h"
/**
 * clear_bit - Entry point
 * @n: pointer to the number to change
 * @index: index to the bit to clear
 * Return: 1 for Success, -1 for Failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (-(1UL << index) & *n);
	return (1);
}
