#include "main.h"

/**
 * _islower - check for lowercase
 *
 * Description: check if int c is lowercase or no
 * @c: the character that the function checks
 * Return: 1 if lowercase, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
