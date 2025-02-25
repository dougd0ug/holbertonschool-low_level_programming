#include "main.h"

/**
 * reset_to_98 - Entry
 * @a: parameter we want to update
 * @b: same
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = *a;
}