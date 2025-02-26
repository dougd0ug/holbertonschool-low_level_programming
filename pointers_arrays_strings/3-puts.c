#include "main.h"

/**
 * _puts - Entry
 * @str: parameter we want to puts
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	int length;

	for (length = 0; str[length]; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
