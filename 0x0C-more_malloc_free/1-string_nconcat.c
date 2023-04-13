#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *	string_nconcat - concatenate 2 strings
 *	@s1: string one
 *	@s2: string two
 *	@n: number of concat length
 *	Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int wantedLen;
	size_t s1Len, s2Len;
	char *newString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1Len = strlen(s1);
	s2Len = strlen(s2);
	if (n > s2Len)
		n = s2Len;

	wantedLen = s1Len + n;

	newString = malloc(wantedLen + 1);
	if (newString == NULL)
		return (NULL);

	memcpy(newString, s1, s1Len);
	memcpy(newString + s1Len, s2, n);
	newString[wantedLen] = '\0';

	return (newString);
}
