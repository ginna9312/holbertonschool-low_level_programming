#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
	{
		printf("last digit %d is %d and is greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, p);
	}
	else
	{
		printf("last digit of %d and is less than 6 and not 0\n", n, p);
	}
	return (0);
}
