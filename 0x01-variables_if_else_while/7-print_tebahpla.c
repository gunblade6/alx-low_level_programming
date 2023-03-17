#include <stdio.h>


/**
 * main - reverse alphabet
 *
 * Description: print alphabet from a to z in reverse
 *
 * Return: z - a
 *
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
