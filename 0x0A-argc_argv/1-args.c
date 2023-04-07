#include <stdio.h>
#include "main.h"

/**
 *	main - print the number of arguments
 *	@argc: number of arguments
 *	@argv: array of arguments
 *	Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", argc - 1);
	return (0);
}
