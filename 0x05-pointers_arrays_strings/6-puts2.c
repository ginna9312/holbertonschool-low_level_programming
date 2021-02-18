# include "holberton.h"
/**
 *puts2 - prints
 *@str:string
 */
void puts2(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
