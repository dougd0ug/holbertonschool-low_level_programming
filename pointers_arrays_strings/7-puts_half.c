#include "main.h"

/**
 * puts_half - print half of a string
 * @str: parameter we want to puts
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	int length;
	int i;

	for (length = 0; str[length]; length++)
	{
	}

	if ((length % 2) == 0)
	{
		for (i = (length / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
	} else
	{
		for (i = ((length + 1) / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
