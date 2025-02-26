#include "main.h"

/**
 * print_rev - Entry
 * @s: parameter we want to puts
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{
	int length;
	int rev;

	for (length = 0; s[length]; length++)
	{
		int i;

		i = (s[length]);
	}

	for (rev = length; s[length]; rev--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
