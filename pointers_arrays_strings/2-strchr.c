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
	char *ptr = s;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&ptr[i]);
		} else
		{
			return NULL;
		}
	}
	return (0);
}
