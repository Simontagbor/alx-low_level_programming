/*
 * file - 1-print_rev_recursion
 * Author: Simon Tagbor
 */

#include "main.h"

/**
 * _print_rev_recursion - a function to print string in reverse
 * @s: a string parameter to be printed out.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
