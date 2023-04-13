#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
