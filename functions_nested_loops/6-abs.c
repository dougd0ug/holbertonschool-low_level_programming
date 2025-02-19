#include "main.h"

/**
 * _abs - Entry
 * @i: the character we want to check
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
