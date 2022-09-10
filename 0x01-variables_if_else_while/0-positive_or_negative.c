#include <stdlib.h>
#include <stdio.h>
#include <time.h>



/*
 * main - Entry point
 * Description: a file to generate random number
 * Return: Always 0(sucess)
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		puts("is positive");
	}
	else if (n == 0)
	{
		puts("is zero");
	}
	else
		puts("is negative");

	return (0);
}

