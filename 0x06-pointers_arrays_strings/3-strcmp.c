# include "holberton.h"
/**
 *_strcmp -  compare two strings
 *@s1: string
 *@s2: string
 *Return: the first character that are not same
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a]; a++)
		{}
	return (s1[a] - s2[a]);
}
