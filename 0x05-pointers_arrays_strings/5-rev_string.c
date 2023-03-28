#include <stdio.h>
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
		i++;
	}

	len -= 1;
	char arr[len];
	int j = 0;

	while (len >= 0)
	{
		arr[j] = s[len];
		len--;
		j++;
	}

	_putchar('\n');
	*s = arr;
}
