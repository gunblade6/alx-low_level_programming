#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_strdup(char *str)
{
	int i, length;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		length = strlen(str) + 1;

		newStr = malloc(length * sizeof(char));
		if (newStr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < length; i++)
		{
			newStr[i] = str[i];
		}
		return (newStr);
	}
}
