#include <stdio.h>
#include <string.h>
/**
 * main - putchar
 * print alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}

	}
	putchar('\n');
	return (0);
}
