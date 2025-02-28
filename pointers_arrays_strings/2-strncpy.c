#include "main.h"

/**
 * *_strncat - Write a function that copies a string
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
	int length;
	int copy;

	for (length = 0; dest[length] != '\0'; length++)
	{
	}
	
	for (copy = 0; copy <= length; length++)
	{
		src[n] = dest[length];
	}
	src[n] = '\0';
	return(src);
}
