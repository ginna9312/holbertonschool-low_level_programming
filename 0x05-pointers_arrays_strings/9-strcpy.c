# include "holberton.h"
/**
* _strcpy - copies the string pointed to by src.
*@dest: pointer string
*@src: pointer
*Return: the value dest
*/
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
