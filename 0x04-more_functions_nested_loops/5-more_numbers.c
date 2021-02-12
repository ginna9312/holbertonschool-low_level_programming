#include "holberton.h"
/**
 *more_numbers - prints the numbers 0 - 14 ten times
 *return: nothing
 */
void more_numbers(void)
{
	int a, b;

	a = b = 0;
	while (a < 10)
	{
		while (b <= 14)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			++b;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}
