/*
 * 3-mul -multiplying 2 numbers the name of a program file.
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

	if (argc >= 3)
	{
		int count = 1;
		int result = 1;

		for (count = 1; count < argc; count++)
		{
			result = result * atoi(argv[count]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
