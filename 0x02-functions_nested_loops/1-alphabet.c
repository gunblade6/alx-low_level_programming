#include <stdio.h>

void print_alphabet();

/**
 * main - print alphabet
 *
 *	Return: always 0
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return;
}
