#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int alph;

	for (alph = 0; alph <= 15; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
