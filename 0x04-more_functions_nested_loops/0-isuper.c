#include "holberton.h"
/**
 * _isupper - checks for uppercase character.
 * @c:is a digit
 * Return: 1 if c is a digit and return 0 if is otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
