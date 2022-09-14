/*
 * File: 5-sign.c
 * Auth: Simontagbor
 */

#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @s: The number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less than zero.
 */
int print_sign(int s)
{
	if (s > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (s == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
