#include "main.h"

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
		printf("%p", a[i]);
		_putchar(',');
		_putchar(' ');

		if (i == n)
		{
			printf("%p", a[i]);
		}
	}
	_putchar('\n');
}
