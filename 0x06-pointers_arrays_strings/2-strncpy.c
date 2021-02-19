# include "holberton.h"
/**
 *_strncpy - copies a string
 *@dest: string
 *@src: string
 *@n: bytes
 *Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
		dest[a] = src[a];
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}
