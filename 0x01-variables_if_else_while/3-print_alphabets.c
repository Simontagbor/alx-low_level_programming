#include <stdio.h>
/**
 * main - print  alphabets from a-z
 *
 * Description: using the main function
 * this function prints the alphabets from a to z in lower case
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{
		putchar(ch);
	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
