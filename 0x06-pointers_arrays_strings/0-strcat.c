#include <stdio.h>

/**
 * _strcat - a function to concatenate string constants
 * @dest: an argument of the char type that references a first string
 * @src: an argument of the char type that references a second string
 *
 * Return: a pointer to resulting sring dest
 */

char *_strcat(char *dest, char *src)
{

	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] =  src[b];
		b++;
		a++;
	}
	return (dest);
}
