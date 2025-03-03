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
	int i = 0;
	int j = 0;
	int result = 0;
	int check = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				result++;
				check = 1;
				break;
			}
			j++;
		}
		if (check == 0)
		{
			return (result);
		}
		i++;
	}
	return (result);
}
