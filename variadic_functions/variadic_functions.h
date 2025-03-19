#ifndef VAR
#define VAR

#include <stdarg.h>

typedef struct op
{
	char form;
	void (*f)(va_list);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void aff_c(va_list aff_list);
void aff_i(va_list aff_list);
void aff_f(va_list aff_list);
void aff_s(va_list aff_list);

#endif
