#include "main.h"

/**
 * add - Entry
 * @a: first int
 * @b: second int
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int add(int a, int b)
{
	int result;

	result = (a + b);

	_putchar(result + '0');
}
