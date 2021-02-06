 #include <stdio.h>
 #include <string.h>
/**
 * main - putchar
 * print number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2; 
	if (n < 0)
		{
			printf("%d is negative \n",n)
		}
	if (n == 0)
		{
			printf("%d is zero\n",n)
		}
	if (n > 0)
		{
			printf("%d is positive\n",n)
		}
	return (0);
}
