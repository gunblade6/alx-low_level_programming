#include <stdio.h>
#include <stdlib.h>

/**
 *	main - function
 *	@argc: number of arguments
 *	@argv: number of arguments
 *	Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		return (1);
	}
	return (0);
}
