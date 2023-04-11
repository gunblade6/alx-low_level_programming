#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *	str_concat - concatenate two strings
 *	@s1: string one
 *	@s2: string two
 *	Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenatedString;
	int s1Len, s2Len, i, j, bothLen;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1Len = strlen(s1);
	s2Len = strlen(s2);

	concatenatedString = malloc(s1Len + s2Len + 1);
	if (concatenatedString == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1Len; i++)
	{
		concatenatedString[i] = s1[i];
	}
	for (i = 0, j = s1Len, bothLen = s1Len + s2Len; j < bothLen; i++, j++)
	{
		concatenatedString[j] = s2[i];
	}
	concatenatedString[s1Len + s2Len] = '\0';

	return (concatenatedString);
}
