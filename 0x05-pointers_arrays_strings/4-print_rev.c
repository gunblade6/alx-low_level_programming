#include <stdio.h>
#include "main.h"

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
