#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * @a: array
 * @n: number of repetitions
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		} else
		{
			_putchar(',');
			_putchar(' ');
			printf("%d", a[i]);
		}
	}
	_putchar('\n');
}
