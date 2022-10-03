/*
 * 3-mul -multiplying 2 numbers the name of a program file.
 * Author: Simomn Tagbor @Simontagbor
 */

#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - funtion that process commands and returns the number of arguments.
 * @argc: the total count of commads received.
 * @argv: the charracter array of commands.
 *
 * Return: 0 - always
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 2)
	{
		int count;
		int result = 0;

		for (count = 1; count < argc; count++)
		{

			if (isdigit(*argv[count]) != 0)
			{
				result += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
