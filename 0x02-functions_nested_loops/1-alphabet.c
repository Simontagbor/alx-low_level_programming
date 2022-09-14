/*
 * File: 1-alphabet.c
 * Auth: Simontagbor
 */

#include "main.h"

/**
 * print_alphabet - print an alphabet in thelowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
