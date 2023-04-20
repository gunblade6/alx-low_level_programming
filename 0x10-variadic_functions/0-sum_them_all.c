#include <stdarg.h>


int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

