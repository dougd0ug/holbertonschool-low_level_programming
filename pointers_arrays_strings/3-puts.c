#include "main.h"

/**
 * _puts - Entry
 * @str: parameter we want to puts
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	char length[] = str;

	_putchar(&length[]);

}
