#include "main.h"

/**
 * print_square - Entry
 * @size: size of the square
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
{
	int height;
	int lines;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < size; lines++)
		{
			for (height = 0; height < size; height++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
