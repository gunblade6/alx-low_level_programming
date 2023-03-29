#include "main.h"
#include <stdio.h>

/**
 *	print_array - print array
 *	@a: array
 *	@n: number variable
 *	Return: n elements of array
 *
 */
void print_array(int *a, int n)
{
		int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i++]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
