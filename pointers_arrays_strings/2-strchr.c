#include "main.h"
#include <stddef.h>

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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return ('\0');
	}

}
