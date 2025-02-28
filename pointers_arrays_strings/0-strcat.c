#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings
 * @dest: parameter we want to puts
 * @src: parameter we want to switch
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}

	for (j = 0; src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
