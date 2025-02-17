#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	char alph2 = 'A';

	while (alph2 <= 'Z')
	{
		putchar(alph2);
		alph2++
	}
	putchar('\n');
	return (0);
}
