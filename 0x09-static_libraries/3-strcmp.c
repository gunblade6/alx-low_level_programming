#include "main.h"

/**
 *	_strcmp - compare strings
 *	@s1: string one
 *	@s2: string two
 *	Return: 1 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
	}
	return (0);
}
