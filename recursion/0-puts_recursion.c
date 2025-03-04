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

	_putchar(s[i]);
	
	if (i > 0)
	{
		_puts_recursion(s);
	}
	i++;
}
