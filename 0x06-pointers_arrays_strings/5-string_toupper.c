#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@p: pointer
 *Return: the string
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')

			p[i] -= 'a' - 'A';
		i++;

	}
	return (p);
}
