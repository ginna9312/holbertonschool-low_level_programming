#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2 }
d = n % 18;
	if (d > 5)
	{
		printf("%d is %d and is grater than 5\n", d);
	}
	else if (d == 0)
	{
		printf("%d is %d and is 0\n", d);
	}
	else
	{
		printf("%d is %d positive\n", d);
	}
	return (0);
}
