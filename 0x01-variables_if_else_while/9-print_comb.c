#include <stdio.h>
/**
 * main - a prmain function to print combined char and  basic int
 *
 * Description: this creates a character combinations of  char and int
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);

		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');
	return (0);
}
