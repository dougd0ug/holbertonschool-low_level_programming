#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int alph;

	for (alph = 97; alph <= 122; alph++)
	{
		if (alph != 101 && alph != 113)
		{
			putchar(alph);
		}
	}
	putchar(\n);
	return (0);
}
