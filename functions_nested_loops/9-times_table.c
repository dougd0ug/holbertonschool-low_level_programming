#include "main.h"

/**
 * times_table - Entry
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void);
{
	int n, mult, prod;

	for (n = 0; n <= 10; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = mult * n;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
