#include "main.h"

/**
 * _memset - fill memory with constant value
 * @s: string pointer
 * @b: constant value
 * @n: number of iterations
 * Return: pointer to new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
