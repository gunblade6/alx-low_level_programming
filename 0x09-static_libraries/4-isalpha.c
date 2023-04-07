#include "main.h"


/**
 *	_isalpha - check if c in alphabet
 *
 *	Description: check if a character in alphabet
 *	@c: the char the function checks
 *
 *	Return: 1 if c in alphabet, 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
