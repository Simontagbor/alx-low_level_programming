/*
 * 0-whatsmyname - a souce file for printing the name of a program file.
 * Author: Simomn Tagbor @Simontagbor
 */

#include <stdio.h>
#include "main.h"

/**
 * main - funtion that process commands and returns the number of arguments.
 * @argc: the total count of commads received.
 * @argv: the charracter array of commands.
 *
 * Return: 0 - always
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
