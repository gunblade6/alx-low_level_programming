#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;	
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (i = 0, len = strlen(str); i < len; i++)
	{
		str[i] = 0;
	}

	return (str);
}
