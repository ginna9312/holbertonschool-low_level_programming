#include "holberton.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9
 *return 0
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
			++c;
	}
	_putchar('\n');
}
