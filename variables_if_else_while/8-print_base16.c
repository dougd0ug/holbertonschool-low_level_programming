#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int alph;

	for (alph = 0; alph <= 9; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	for (alph = 10; alph <= 15; alph++)
	{
		putchar(alph);
	}
	return (0);
}
