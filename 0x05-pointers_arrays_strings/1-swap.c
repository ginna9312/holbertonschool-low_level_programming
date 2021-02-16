#include "holberton.h"
/**
 * swap_int -  swaps the values of two integers
 *@a: 1integral
 *@b: 2integral
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
