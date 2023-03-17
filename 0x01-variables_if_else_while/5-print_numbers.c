#include <stdio.h>
/**
 * main - print digits
 *
 * Description: Print all single digit number of base 10 starting from 0
 *
 * Return: numbers of base 10
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
