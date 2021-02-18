# include "holberton.h"
/**
 * _strcat - concatenate two strings
 *@dest: string
 *@src: string
 *Return:  pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	for (b = 0; dest[b] != '\0'; b++)
		{}
	while (src[a] != '\0')
	{
		dest[b + a] = src[a];
		a++;
	}
	return (dest);
}
