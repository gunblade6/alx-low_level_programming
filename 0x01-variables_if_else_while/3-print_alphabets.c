#include <stdio.h>

/**
 * main - print alphabets
 *
 * Description: print alphabet characters from a to z
 * and from A to Z using only 3 putchar fucntions
 *
 * Return: Alphabets in order from lowercase to uppercase
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
