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
	int i = 0;


	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	len -= 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
