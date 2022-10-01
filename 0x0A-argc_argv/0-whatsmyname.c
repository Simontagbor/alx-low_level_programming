/*
 * 0-whatsmyname - a souce file for printing the name of a program file.
 * Author: Simomn Tagbor @Simontagbor
 */

#include <stdio.h>

/**
 * main - funtion that process commands and returns the name of a program.
 * @argc: the total count of commads received.
 * @argv: the charracter array of commands.
 *
 * Return: 0 - always
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{

	printf("%s\n", argv[0]);

	return (0);
}
