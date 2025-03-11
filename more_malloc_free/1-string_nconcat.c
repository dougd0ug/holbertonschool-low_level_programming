#include "main.h"
#include <stdlib.h>

/**
 * **string_nconcat - Write a function that concatenates two strings
 * @s1: array we want to concatenate
 * @s2: array we want to concatenate
 * @n: bytes
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
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
	if (n >= j)
	{
		n = j;
	}	
	copy = malloc(sizeof(char) * (i + 1 + n));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		copy[i] = s1[i];
	}

	for (j = 0; s2[j] <= s2[n]; j++)
	{
		copy[i] = s2[j];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
