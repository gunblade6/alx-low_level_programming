#include <stdio.h>

/**
 *	_strlen - get string length
 *	@s: string
 *	Return: string length
 */
int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
