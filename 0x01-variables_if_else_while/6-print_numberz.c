#include <stdio.h>

/**
 * main -  a function to print base numers up to 10
 *
 * Description: usimmg the main function to print numbers from 0 to 10
 * Return: 0
 */

int main(void)

{


	char n;

	for (n = '0'; n <= '9'; n++)

	{
		putchar(n);
	}

	putchar('\n');
	return (0);

}

