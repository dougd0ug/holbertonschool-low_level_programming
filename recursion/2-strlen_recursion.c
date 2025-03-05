#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: string we want to mesure
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int comp = 0;

	if (s[i] != '\0')
	{
		comp += 1;
		comp += _strlen_recursion(&s[i + 1]);
	}
	return (comp);
}
