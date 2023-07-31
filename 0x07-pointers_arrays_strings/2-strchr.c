#include "main.h"
/**
 * *_strchr - Entry point
 * @s: The string to be searched
 * @c: the character to be located
 * Return: If c is found - pointer to first occurence.
 * if c is not founf - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
