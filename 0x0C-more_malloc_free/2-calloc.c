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
	void *arr = NULL;	

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	memset(arr, 0, nmemb * size);

	return (arr);
}
