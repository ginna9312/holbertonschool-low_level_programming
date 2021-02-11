#include "holberton.h"
/**
*_isupper - checks for a digit (0 through 9)
* @c: is a digit
* Return: 1 if  c is a uppercase and 0 if is otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
