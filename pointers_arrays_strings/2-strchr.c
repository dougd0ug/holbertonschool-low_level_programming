#include "main.h"

/**
 * *_strchr - Write a function that locates a character in a string
 * @s: string
 * @c: character we searching
 *
 * Return: On success 1.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int result;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s);
		} else
		{
			return (NULL);
		}
	}
}
