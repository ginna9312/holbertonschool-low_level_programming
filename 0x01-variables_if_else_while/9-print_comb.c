#include <stdio.h>
#include <string.h>
/**
 * main - putchar
 * print number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(44);
			putchar (32);
		}
	}

		putchar('\n');
		return (0);
}
