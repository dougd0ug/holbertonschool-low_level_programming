#include "main.h"

/**
 * _strcmp - Write a function that compares two strings
 * @s1: parameter we want to puts
 * @s2: parameter we want to switch
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int comp = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] != s2[j])
			{
				comp++;
			}
		}
	}
	return (comp);
}
