#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
