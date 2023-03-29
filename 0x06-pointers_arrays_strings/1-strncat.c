#include "main.h"
#include <stdio.h>

/**
 *	_strncat - concat string untill n characters
 *	@dest: destination string
 *	@src: source string
 *	@n: number of characters wantet
 *	Return: pointer to new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
