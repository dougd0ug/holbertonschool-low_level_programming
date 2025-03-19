#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * aff_c - afficher char
 * @aff_list: liste
 */

void aff_c(va_list aff_list)
{
	printf("%c", va_arg(aff_list, int));
}

/**
 * aff_i - afficher int
 * @aff_list: liste
 */

void aff_i(va_list aff_list)
{
	printf("%d", va_arg(aff_list, int));
}

/**
 * aff_f - afficher float
 * @aff_list: liste
 */

void aff_f(va_list aff_list)
{
	printf("%f", va_arg(aff_list, double));
}

/**
 * aff_s - afficher string
 * @aff_list: liste
 */

void aff_s(va_list aff_list)
{
	char *s = va_arg(aff_list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
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

	op_t ops[] = {
		{'c', aff_c},
		{'i', aff_i},
		{'f', aff_f},
		{'s', aff_s},
		{'\0', NULL}
	};

	va_start(aff_list, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].form)
		{
			if (format[i] == ops[j].form)
			{
				printf("%s", separator);
				ops[j].f(aff_list);
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
