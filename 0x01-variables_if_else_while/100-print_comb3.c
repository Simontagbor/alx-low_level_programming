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
	int d;

	for (c = '0'; c <= '8'; c++)

	{


		for (d = '0'; d <= '9'; d++)
		{
			if (d != c && c < d)
			{
				putchar(c);
				putchar(d);
				putchar(',');
				putchar(' ');
			}

		}

	}

	putchar('\n');
	return (0);

}
