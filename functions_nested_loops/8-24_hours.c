#include "main.h"

/**
 * jack_bauer - Entry
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 00; hour <= 23)
	{
		for (min = 00; min <= 59; min++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour);
			}
			else
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
			}

			if (min < 10)
			{
				_putchar('0');
				_putchar(min);
			}
			else
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
		}
		hour++;
	}
}
