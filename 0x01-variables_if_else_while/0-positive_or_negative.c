 #include <stdio.h>
 #include <string.h>
/**
 * main - putchar
 * print number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		{
			printf("%d is negative \n", n);
		}
	else if (n == 0)
		{
			printf("%d is is zero\n", n);
		}
	else (n > 0)
		{
			printf("%d is positive\n", n);
		}
	return (0);
}
