#include <stdio.h>

/**
 *	main - print alphabt
 *
 *	Description: print all alphabet letters
 *	except [e, q]
 *
 *	Return: alphabet in lowercase and in order except 'e' and 'q'
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
