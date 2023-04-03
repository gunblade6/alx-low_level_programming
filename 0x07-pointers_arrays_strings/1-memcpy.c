#include "main.h"

/**
 *	_memcpy - cpy a an array to another
 *	@dest: destination array
 *	@src: source array
 *	@n: number of iterations
 *	Return: pointer to new array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
