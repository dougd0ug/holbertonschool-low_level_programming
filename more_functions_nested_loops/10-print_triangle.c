#include "main.h"

/**
 * print_triangle - Entry
 * @size: size of the triangle
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
	int height;
	int lines;
	int nb;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < n; lines++)
		{
			for (height = n; height > lines; height--)
			{
				_putchar(' ');
			}

			for (nb = 0; nb <= lines; nb++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	return (0);
}
