#include "main.h"

/**
 * print_last_digit - Entry
 * @i: the character we want to check
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int i)
{
	int n = (i % 10);

	if (n < 0)
	{
		n *= -1;
	}

	_putchar(n + '0');
	return (n);
}
