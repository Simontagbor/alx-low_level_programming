#include <stdio.h>
/**
 * main - program to print hexadecimal numbers
 *
 * Description: main function prints hexa decimal numbers fro 0 to 10
 * Return: 0 (success)
 */

int main(void)
{
	char s;

	for (s = '0' ; s <= '9'; s++)
	{
		putchar(s);
	}

	for (s = 'a' ; s <= 'f'; s++)
	{
		putchar(s);
	}

	putchar('\n');
	return (0);

}
