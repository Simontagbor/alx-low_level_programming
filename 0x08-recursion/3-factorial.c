/**
 * file - 3-factorial
 * Author: Simon Tagbor
 */
#include "main.h"

/**
 * factorial - a function that returns the factorial of a number
 * @n: parameter to for which factorial is calculated
 * Return: int value of the resulting factorial
 */

int factorial(int n)
{
	int result = n;

	if ( n <= 1)
		return (1);
	if ( n < 0)
	{
		return (-1);
	}
	result = n * factorial(n-1);
	return (result);

}
