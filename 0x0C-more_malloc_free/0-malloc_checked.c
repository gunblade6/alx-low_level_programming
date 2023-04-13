#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *	malloc_checked - allocate memory
 *	@b: number of bytes
 *	Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
