#include "main.h"
#include <stdio.h>

/**
 *	puts_half - half a string
 *	@str: string
 *	Return: half of a string
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int half;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len / 2) + 1;
	}

	printf("%s\n", str + half);
}
