#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int alph;

	for (alph = 48; alph < 58; alph++)
	{
		if (alph < 57)
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
