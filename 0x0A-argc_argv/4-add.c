#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *	main - function
 *	@argc: number of arguments
 *	@argv: array of arguments
 *	Return: 0 if all are number 1 otherwise
 */

int main(int argc, char *argv[])
{
	int total = 0;
	int i, j;

	if (argc == 1)
	{
		printf("%i\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			total += atoi(argv[i]);
		}
		printf("%i\n", total);
	}
	return (0);
}
