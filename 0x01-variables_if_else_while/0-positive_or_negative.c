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
		printf("las digit of %d is %d and is grater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("las digit of %d is %d and is 0\n", n, d);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
