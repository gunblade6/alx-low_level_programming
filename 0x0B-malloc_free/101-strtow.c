#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: String to be split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, count = 0, len = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	arr = malloc((count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		while (*str == ' ')
			str++;

		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
		arr[i] = malloc((len + 1) * sizeof(char));
		if (arr[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(arr[k]);

			free(arr);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			arr[i][j] = *str++;

		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
