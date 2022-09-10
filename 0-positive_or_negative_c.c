#include <stdlib.h>

#include <time.h>



/**
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

	return (0);
}

