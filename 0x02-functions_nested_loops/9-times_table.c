include "holberton.h"
/**
 * times_table - prints table from 0 - 9
 *
 *Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int numero = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			numero = i * j;
			if (numero <= 9)
			{
				if (j > 0)
			{
					putchar(',');
					putchar(' ');
					putchar(' ');
		      	         }
				        putchar('0' + numero);
			         }
		        	else
				{
			   	        putchar(',');
					putchar(' ');
					putchar('0' + numero / 10);
					putchar('0' + numero % 10);
		                }
			}
			putchar('\n');
		}
}
