#include "main.h"
#include "2-strlen.c"

/**
 * *_strspn - Write a function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int length = _strlen(accept);
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= length; i++)
		{
			if (j == length)
			{
				result = 1;
				break;
			}
			else if (s[i] == accept[j])
			{
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
