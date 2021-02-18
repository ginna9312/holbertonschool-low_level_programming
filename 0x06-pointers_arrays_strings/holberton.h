#ifndef _HOLBERTON_H
#define _HOLBERTON_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
/*prints a char to the stdout*/
int _putchar(char c);

/*prints a char to the stdout*/
char *_strcat(char *dest, char *src);

/*prints a char to the stdout*/
char *_strncat(char *dest, char *src, int n);

/*prints a char to the stdout*/
char *_strncpy(char *dest, char *src, int n);

/*prints a char to the stdout*/
int _strcmp(char *s1, char *s2);

/*prints a char to the stdout*/
void reverse_array(int *a, int n);

/*prints a char to the stdout*/
char *string_toupper(char *);

/*prints a char to the stdout*/
char *cap_string(char *);

/*prints a char to the stdout*/
char *leet(char *);

/*prints a char to the stdout*/
char *rot13(char *);


#endif
