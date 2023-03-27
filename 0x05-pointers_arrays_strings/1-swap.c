#include <stdio.h>

/**
 *	swap_int - swap the value of two integers
 *	@a: first int
 *	@b: second int
 *	Return: swap value
 */

void swap_int(int *a, int *b)
{
	int stash;

	stash = *a;
	*a = *b;
	*b = stash;
}
