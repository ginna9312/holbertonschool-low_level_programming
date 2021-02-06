#include <stdio.h>
#include <string.h>
/**
 * main - putchar for
 * print alphabet a-z A-Z
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, upp;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		putchar(upp);
	}
	putchar('\n');
	return (0);

}
