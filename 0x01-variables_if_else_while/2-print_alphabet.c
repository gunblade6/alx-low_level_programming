#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: print alphabet characters
 * from a to z and then a new line
 *
 * Return: alphabet in lowercase and in order
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
