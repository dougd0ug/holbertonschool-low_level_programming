#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name
 * @name: name
 * @f: printf
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
