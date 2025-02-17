#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int alph;

	for (alph = 122; alph >= 97; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
