#include "holberton.h"
/**
 * main - print holberton
 *
 * Return: Always 0.
 **/
int main(void)
{
	char a[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int b;

	for (b = 0; b <= 8; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
