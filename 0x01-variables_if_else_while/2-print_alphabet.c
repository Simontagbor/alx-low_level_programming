#include <stdio.h>

/**
 * main - entry point
 *
 * Description: the main funtion prints characters
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
