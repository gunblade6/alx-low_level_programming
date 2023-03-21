#include "main.h"

int print_sign(int n)
{
	int negative = -1;

	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		_putchar('1');
		return (negative);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
