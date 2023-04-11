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
	if (s1 == NULL)
	{
		s1 = '';
	}
	if (s2 == NULL)
	{
		s2 = '';
	}

	char *concatenatedString;
	int reqMemory = strlen(s1) + strlen(s2) + 1;
	
	if (reqMemory == NULL)
	{
		return (NULL);
	}

	int s1Len = strlen(s1);	
	int s2Len = strlen(s2);
	int i, j;

	concatenatedString = malloc(reqMemory * sizeof(char));
	for (i = 0; i < s1Len; i++)
	{
		concatenatedString[i] = s1[i];
	}
	for (i = 0, j = s1Len; j < s2Len; i++, j++)
	{
		concatenatedString[j] = s2[i];
	}

	return (concatenatedString);
}
