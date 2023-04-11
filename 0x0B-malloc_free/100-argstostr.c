#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *	argstostr - concat all arguments
 *	@ac: number or arguments
 *	@av: array of arguments
 */
char *argstostr(int ac, char **av)
{
	int resultLen = 0;
	int i, j;
	int k = 0;
	char *RESULT;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			resultLen++;

		resultLen++;
	}

	RESULT = malloc(resultLen * sizeof(char) + 1);
	if (RESULT == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			RESULT[k] = av[i][j];
			k++;
		}
		RESULT[k] = '\n';
		k++;
	}

	RESULT[k] = '\0';
	return (RESULT);
}
