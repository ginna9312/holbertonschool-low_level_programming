# include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: array reverse
 *@n:size
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i] = temp;
		i++;
	}

}
