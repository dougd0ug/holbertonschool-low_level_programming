#include "main.h"

/**
 * *_memset - Write a function that fills memory with a constant byte
 * @s: size memory
 * @b: cont of bytes
 * @n: numbers of bytes
 *
 * Return: On success 1.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
