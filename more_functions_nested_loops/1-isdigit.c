#include "main.h"

/**
 * _isupper - Entry
 * @c: the character we want to check
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c);
{
	if (c < 48 && c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
