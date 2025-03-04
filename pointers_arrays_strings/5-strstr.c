#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Write a function that locates a substring
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			while (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
