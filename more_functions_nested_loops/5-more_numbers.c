#include "main.h"

/**
 * more_numbers - Entry
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i < 11; i++)
	{
		for (num = 0; num < 15; i++)
		{
			if (num >= 10)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
