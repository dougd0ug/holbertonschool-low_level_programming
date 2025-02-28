#include "main.h"

/**
 * *_strncpy - Write a function that copies a string
 * @dest: parameter we want to puts
 * @src: parameter we want to switch
 * @n: number of repetitions
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int copy;

	for (copy = 0; src[copy] != '\0' && copy < n; copy++)
	{
		dest[copy] = src[copy];
	}

	if (dest[copy] < n)
	{
		dest[copy] = '\0';
	}
	return (dest);
}
