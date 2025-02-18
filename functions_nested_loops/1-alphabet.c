#include "main.h"

/**
 * print_alphabet - Entry
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	char alph = 'a'

	for (alph = 'a'; alph <= z; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
