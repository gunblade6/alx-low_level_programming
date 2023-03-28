#include "main.h"

/**
 *	puts2 - return ever other char
 *	@str: string
 *	Return: every other character from a string
 *
 */

void puts2(char *str)
{
	int i = 0;
	int index = 0;

	while (str[index] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
		index++;
	}
	_putchar('\n');
}
