#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 * @s: string we want to puts
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s - 1);

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

}
