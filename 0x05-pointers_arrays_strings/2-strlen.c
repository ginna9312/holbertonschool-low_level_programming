#include "holberton.h"
/**
 *  _strlen - calculate the length of a string
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
