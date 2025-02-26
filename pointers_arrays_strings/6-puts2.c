#include "main.h"

/**
 * puts2 - prints 1 character and not the next
 * @str: parameter we want to puts
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length]; length++)
	{
		if ((length % 2) == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
