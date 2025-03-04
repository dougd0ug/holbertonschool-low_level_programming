#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Write a function that searches a string for any of a set of byte
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
