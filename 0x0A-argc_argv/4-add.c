#include <stdio.h>
#include <stdlib.h>

/**
 *	main - function
 *	@argc: number of arguments
 *	@argv: array of arguments
 *	Return: 0 if all are number 1 otherwise
 */

int main(int argc, char *argv[])
{
	int total = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				total += atoi(argv[i]);
			}
		}
		printf("%d\n", total);
	}
	return (0);
}
