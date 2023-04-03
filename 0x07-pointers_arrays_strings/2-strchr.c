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
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
