#include <stdio.h>

/**
 *	main - numbers of base 16
 *
 *	Description: print all the numbers of base 16 in lowercase
 *
 *	Return: numbers of base 16 in lowercase
 *
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
