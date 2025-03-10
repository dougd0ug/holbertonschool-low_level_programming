#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: array we want to concatenate
 * @s2: array we want to concatenate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *copy;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	copy = malloc(sizeof(char) * j + 1 * i + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < copy[i + j]; i++)
	{
		copy[i + j] = s1[i] + s2[j];
	}
	return (copy);
}
