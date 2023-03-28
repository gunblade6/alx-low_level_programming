#include "main.h"

/**
 *	rev_string - reverse string
 *	@s: string
 *	Return: reversed string (*s)
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
	}

	len -= 1;

	while (i < len)
	{
		char *newString[i] = s[len];
		i++;
		len--;
	}

	*s = *newString;

}
