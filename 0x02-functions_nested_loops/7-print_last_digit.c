#include "main.h"

/**
 *	print_last_digit - last digit of a number
 *
 *	@n: number that function checks
 *
 *	Return: last digit of n
 *
 *
 */
int print_last_digit(int n)
{
	int last = n % 10;

	return ("%d\n", last);
}
