#include "holberton.h"
/**
* print_line - draws a straight line (n).
* @n: the number to print.
*/
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n ; i++)
			_putchar ('_');
	_putchar('\n');

}
