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

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	int middle = len / 2;

	*str += middle;
}
