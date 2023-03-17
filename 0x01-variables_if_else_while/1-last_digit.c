#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last number of a string of numbers
 *
 * Description: print the last number of a string of numbers
 *
 * Return: the last number of the string
 */
int main(void)
{
	int n, l;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	l = n % 10;

	printf("Last digit of %d is ", n);
	if (l > 5)
	{
		printf("%d and is greater than 5\n", l);
	}
	else if (l < 5 && l != 0)
	{
		printf("%d and is less than 6 and not 0\n", l);
	}
	else
	{
		printf("%d and is 0\n", l);
	}
	return (0);
}
