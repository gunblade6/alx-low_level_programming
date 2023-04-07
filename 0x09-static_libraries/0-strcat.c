#include "main.h"
#include <stdio.h>

/**
 *	_strcat - concatenate two strings
 *	@dest: destination string
 *	@src: source string
 *	Return: pointer to resulting string `dest`
 */
char *_strcat(char *dest, char *src)
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

	while (i < srcLen)
	{
		dest[destLen] = src[i];
		destLen++;
		i++;
	}

	return (&*dest);
}
