#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns
 * the sum of all its parameters
 * @n: first int
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add;
	va_list sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(sum, int);
	}
	va_end(sum);
	return (add);
}
