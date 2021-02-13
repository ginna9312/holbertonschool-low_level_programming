#include <stdio.h>
/**
 *main - prints numbers 1 - 100
 *multiples of three, print Fizz instead of the number
 *and for the multiples of five, print Buzz
 *for numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizzBuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
