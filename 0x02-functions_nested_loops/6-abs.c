#include "holberton.h"
/**
 * _abs - calculate the absolute value.
 * @a: the number integret to converter.
 * Return:  absolute value of an integer.
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
