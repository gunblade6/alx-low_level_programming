#include <stdio.h>
#include "main.h"

/**
 *	print_rev - reverse string
 *	@s: string
 *	Return: reversed string (*s)
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
