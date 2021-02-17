#include "holberton.h"
/**
 * _puts - return a nonnegative number on success
 *@str: prints a string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
