#include "main.h"
/**
 * get_endianness - Entry point
 * Return: 1 for little or 0 for big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
