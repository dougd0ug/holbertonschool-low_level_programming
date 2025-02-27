#include "main.h"

/**
 * *_strcpy - print half of a string
 * @dest: parameter we want to puts
 * @src: parameter we want to switch
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
