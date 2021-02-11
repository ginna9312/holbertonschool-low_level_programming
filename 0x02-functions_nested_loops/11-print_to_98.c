#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - add two numbers together.
 *@n: number start from 98
 *Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
