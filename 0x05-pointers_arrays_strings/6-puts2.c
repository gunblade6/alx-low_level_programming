#include "main.h"


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
