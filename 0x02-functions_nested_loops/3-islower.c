/*
 * File: 3-islower.c
 * Auth: Simontagbor
 */

#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @a: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
