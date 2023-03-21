#include "main.h"

/**
 *	print_sign - print number sign
 *
 *	Description: print int n sign
 *	@n: number that n checks on
 *
 *	Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
