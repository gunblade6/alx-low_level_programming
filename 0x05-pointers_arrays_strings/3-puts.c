#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string
 * @str: string
 * Return: string to stdout
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
