#include <stdio.h>
#include "main.h"

/**
 *	print_rev - reverse string
 *	@s: string
 *	Return: reversed string (*s)
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char **string = &s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	char arr[len];
	int index = 0;

	i = len - 1;
	while (i <= 0)
	{
		arr[index] = string[i];
		index++;
		i--;
	}

	_puts(arr);

	_putchar('\n');
}
