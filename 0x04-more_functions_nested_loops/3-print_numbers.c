#include "main.h"

/**
 *	print_numbers - print numbers from 0 to 9
 *
 *	Return: 123456789
 *
 * */

void print_numbers(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
