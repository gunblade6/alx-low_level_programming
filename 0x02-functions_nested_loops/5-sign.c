#include "main.h"

int print_sign(int n)
{
	int zero = 0;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar(zero - 1);
		return (zero - 1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
