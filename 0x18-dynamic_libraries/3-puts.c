#include "main.h"
/**
 *  _puts - Entry point
 *  @str: to print string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
