#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number;
for (number = 0 ; < argc; number++)
	printf("%s\n", argv[number]);

	return (0);
}
