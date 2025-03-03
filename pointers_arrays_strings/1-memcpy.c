#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area
 * @dest: return memory
 * @src: base memory
 * @n: numbers of bytes
 *
 * Return: On success 1.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
