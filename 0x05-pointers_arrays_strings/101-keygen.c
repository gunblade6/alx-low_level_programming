#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid password for the program "101-crackme"
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, j, sum, min, max;
	char pass[100];

	srand(time(NULL));

	min = 35, max = 126;
	sum = j = 0;
	while (sum <= (2772 - max))
	{
		i = (rand() % (max - min + 1)) + min;
		pass[j++] = i;
		sum += i;
	}
	i = (2772 - sum);
	sum += i;
	pass[j++] = i;
	for (i = j; i < 100; i++)
		pass[i] = '\0';
	printf("%s", pass);

	return (0);
}
