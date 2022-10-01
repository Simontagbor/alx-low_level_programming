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

int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		int count = 0;

		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
