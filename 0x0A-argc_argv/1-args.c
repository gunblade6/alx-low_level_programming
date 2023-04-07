#include <stdio.h>

/**
 *	main - print the number of arguments
 *	@argc: number of arguments
 *	@argv: array of arguments
 *	Return: Always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
