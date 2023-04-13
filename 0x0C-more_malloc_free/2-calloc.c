#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
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
