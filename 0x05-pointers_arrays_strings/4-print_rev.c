#include <stdio.h>
#include "main.h"

/**
 *	print_rev - reverse string
 *	@s: string
 *	Return: reversed string (*s)
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	char arr[len];
	int index = 0;

	for (in i = len - 1; i <= 0; i--)
	{
		arr[index] = s[i];
		index++;
	}

	_puts(arr);

	_putchar('\n');
}
