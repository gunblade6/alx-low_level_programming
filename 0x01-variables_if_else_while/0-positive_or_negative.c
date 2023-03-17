#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - set n to a random number each time
 *
 * Description: set the variable n to a random value
 * each time the program is excuted
 *
 * Return: The number followed by "negative", "positive" or is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	printf("\n");
	return (0);
}
