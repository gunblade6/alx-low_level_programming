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
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return;
}
