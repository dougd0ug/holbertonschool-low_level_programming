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
	int i = 0;
	int comp;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		if (s1[i] != s2[i])
		{
			comp = (s1[i] - s2[i]);
		} else
		{
			comp = 0;
		}
	}
	return (comp);
}
