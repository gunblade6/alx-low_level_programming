#include "main.h"

/**
 * factorial - Calculates factorial number.
 * @n: number to calculate factorial.
 * Return: facorial number
 */
int factorial(int n)
{
	if (n == 0)
		return 1;
	return (factorial(n - 1));
}
