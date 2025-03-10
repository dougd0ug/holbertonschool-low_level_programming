#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Write a function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: array we want to duplicate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
	}

	copy = malloc(sizeof(char) * j);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= j; i++)
	{
		str[i] = copy[i];
	}
	return (copy);
}
