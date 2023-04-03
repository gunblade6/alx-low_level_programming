#include "main.h"
#include <stdio.h>

/**
 * _strchr - look for a char in a string
 * @s: string
 * @c: wanted char
 * Return: a pointer to the char if founded
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
