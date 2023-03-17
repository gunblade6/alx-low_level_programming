#include <stdio.h>

/**
 * main - print numbers with putchar
 *
 * Description: Print number from 0 to 10 with only putchar
 *
 * Return: 0 to 10
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
