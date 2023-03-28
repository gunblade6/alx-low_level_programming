#include <stdio.h>
#include "main.h"

/**
 *	print_rev - reverse string
 *	@s: string
 *	Return: reversed string (*s)
 */
void print_rev(char *s)
{
	int len;
	len = _strlen(s);

	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
