# include "holberton.h"
/**
 *rev_string - reverses a string
 *@s:string
 */
void rev_string(char *s)
{
	int a, j;
	char r[500];

a = j = 0;
	while (s[a] != '\0')
	{
		r[a] = s[a];
		a++;
	}
	a--;
	while (a >= 0)
	{
		s[a] = r[j];
		a--;
		j++;
	}
	s[j++] = '\0';

}
