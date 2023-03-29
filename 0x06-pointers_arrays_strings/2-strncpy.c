#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string to another string
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: pointer to new string
 */
char *_strncpy(char *dest, char *src, int n)
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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (&*dest);
}
