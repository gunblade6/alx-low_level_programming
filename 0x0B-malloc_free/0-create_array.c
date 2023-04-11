#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (*arr);
}
