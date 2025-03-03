#include "main.h"
#include <stdio.h>

/**
 * *_strspn - Write a function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int result;

	for (i = 0; s[i] != '\0'; i++)
	{
		result = 0;
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (s[i] == accept[j])
			{
				result = 1;
				break;
			}
		}

		if (result == 0)
		{
			break;
		}
	}
	return (i);
}
