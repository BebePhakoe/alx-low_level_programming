#include "main.h"
/**
 * *_strpbrk - Entry point
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for.
 * Return: If a set is matched - a pointer to the matched byte
 * if no set i smatched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
