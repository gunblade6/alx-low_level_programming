#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int srcLen = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		destLen++;
		i++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		srcLen++;
		i++;
	}
	i = 0;

	while (i < n)
	{
		dest[destLen] = src[i];
		destLen++;
		i++;
	}
	dest[destLen] = '\0';
	return (&*dest);
}
