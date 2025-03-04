#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line
 * @s: string we want to puts
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;
	if (i < 0)
	{
		return;
	}
	
	_putchar(s[i]);
	i++;
}
