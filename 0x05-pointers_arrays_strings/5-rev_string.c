#include "main.h"

/**
 *	rev_string - reverse string
 *	@s: string
 *	Return: reversed string (*s)
 */
void rev_string(char *s)
{
		int i, length;
	char tmp;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1];
		s[length - 1] = tmp;
		length--;
	}
}
