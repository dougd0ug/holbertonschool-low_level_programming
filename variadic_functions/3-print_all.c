#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * aff_c - afficher char
 * @aff_list: liste
 */

void aff_c(char va_list aff_list)
{
	printf("%c", va_arg(aff_list, int));
}

/**
 * aff_i - afficher int
 * @aff_list: liste
 */

void aff_i(int va_list aff_list)
{
	printf("%d", va_arg(aff_list, int));
}

/**
 * aff_f - afficher float
 * @aff_list: liste
 */

void aff_f(double va_list aff_list)
{
	printf("%f", va_arg(aff_list, double));
}

/**
 * aff_s - afficher string
 * @aff_list: liste
 */

void aff_s(char va_list aff_list)
{
	if (s == NULL)
	{
		printf("(nil)\n");
		continue;
	}

	printf("%s", va_arg(aff_list, char *));
}

/**
 * print_all - Write a function that prints anything
 * @format: format of arguments
 */

void print_all(const char * const format, ...)
{
	va_list aff_list;
	int i = 0;
	int j = 0;
	char *separator = "";

	size_t ops[] = {
		{"c", aff_c},
		{"i", aff_i},
		{"f", aff_f},
		{"s", aff_s},
		{NULL, NULL}
	};

	va_start(aff_list, format);

	while (format && format[i])
	{
		while (ops[j].form)
		{
			if (format[i] == ops[j].form)
			{
				printf("%s", separator);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(aff_list);
	printf("\n");
}
