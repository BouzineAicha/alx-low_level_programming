#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int nember;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (nember = 0; *argv; nember++, argv++)
			;

		printf("%d\n", nember - 1);
	}

	return (0);
}
