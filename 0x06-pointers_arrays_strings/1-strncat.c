# include "holberton.h"
/**
 *_strncat - concatenate two strings
 *@dest: strinh
 *@src: string
 *@n: bytes
 *Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	for (b = 0; dest[b] != '\0'; b++)
		{}
	while (src[a] != '\0' && a < n)
	{
		dest[b + a] = src[a];
		a++;
	}
	return (dest);
}
