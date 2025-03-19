#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings
 * followed by a new line
 * @separator: string between numbers
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *result;
	va_list aff;

	va_start(aff, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(aff, char*);
		if (result == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s", result);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(aff);
}
