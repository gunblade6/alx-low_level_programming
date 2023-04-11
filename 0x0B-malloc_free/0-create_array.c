#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *	create_array - create array of type char
 *	@size: size of the array
 *	@c: all chars in the array
 *	Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
