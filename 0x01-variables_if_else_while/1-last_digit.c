#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Description: a file to generate random number
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{

	int n, lastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	/* your code goes there */

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}

	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, lastDigit);
	}
	return (0);


}
