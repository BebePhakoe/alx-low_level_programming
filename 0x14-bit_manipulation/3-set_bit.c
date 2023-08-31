#include "main.h"
/**
 * set_bit - Entry point
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for Success, -1 for Failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
