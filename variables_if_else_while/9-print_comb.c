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
		if (alph < 9)
		{
			putchar(alph);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(alph);
		}
	}
	return (0);
}
