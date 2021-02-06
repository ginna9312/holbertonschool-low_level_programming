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
	char pet;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (pet = 'a'; pet <= 'f'; pet++)
	{
		putchar(pet);
	}
putchar('\n');
return (0);
}
