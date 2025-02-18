#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int alph;

	for (alph = 0; alph < 10; alph++)
	{
		putchar(alph + '0');
		if (alph < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
