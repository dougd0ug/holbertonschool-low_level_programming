#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers
 * followed by a new line
 * @separator: string between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list aff;

	va_start(aff, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(aff, int);
		printf("%d", result);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(aff);
}
