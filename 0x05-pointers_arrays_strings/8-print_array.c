#include "main.h"

/**
 *	print_array - print array
 *	@a: array
 *	@n: number variable
 *	Return: n elements of array
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
