#include "main.h"
/**
 * *_memcpy - Entry point
 * @n: function copies
 * @src: bytes fro  memory area
 * @dest: to memory area
 * Return: a poinyer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
