#include "main.h"

/**
 *	print_alphabet_x10 - print 10 alphabet
 *
 *	return: void
 *
 */
void print_alphabet_x10(void)
{
	int letter = 'a';
	int i = 10;

	while (i <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
