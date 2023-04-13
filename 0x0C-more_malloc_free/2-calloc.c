#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *	_calloc - allocate memory for a string
 *	@nmemb: array elements size
 *	@size: every element size in bytes
 *	Return: pointer to new array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int s;
	char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	s = nmemb * size;

	if ((ptr = malloc(s)) == NULL)
		return (NULL);

	memset(ptr, 0, s);

	return (ptr);
}
