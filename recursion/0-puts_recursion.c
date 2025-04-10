#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Write a function that prints a string
 * @s: string we want to puts
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (i < s[i])
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	} else
	{
		_putchar('\n');
	}
}
