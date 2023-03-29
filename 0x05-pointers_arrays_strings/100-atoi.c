#include "main.h"

/**
 * _atoi - convert string into integer
 * @s: string given
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i, j, sign;
	unsigned int n, a;

	i = 0;
	sign = 1;
	n = 0;
	while (s[i] != '\0' && (s[i] < 48 || s[i] > 57))
		if (s[i++] == 45)
			sign *= -1;
	if (s[i] != '\0')
	{
		j = i;
		while (s[j + 1] != '\0' && (s[j + 1] >= 48 && s[j + 1] <= 57))
			j++;
		a = 1;
		while (i <= j)
		{
			n += (s[j] - 48) * a;
			a *= 10;
			j--;
		}
	}
	n *= sign;
	return (n);
}
