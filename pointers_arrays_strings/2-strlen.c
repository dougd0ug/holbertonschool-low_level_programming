#include "main.h"

/**
 * _strlen - Entry
 * @s: parameter we want to check
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length]; length++)
	{
		return (length);
	}
}
