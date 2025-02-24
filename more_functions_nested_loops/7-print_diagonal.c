#include "main.h"

/**
 * print_diagonal - Entry
 * @n: number of lines
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
