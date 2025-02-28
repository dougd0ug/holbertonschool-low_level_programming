#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings
 * @dest: parameter we want to puts
 * @src: parameter we want to switch
 * @n: number of repetitions
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}

	for (j = 0; src[j] && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	if (src[j] > n)
	{
		dest[i + j] = '\0';
	}
	return (dest);
}
