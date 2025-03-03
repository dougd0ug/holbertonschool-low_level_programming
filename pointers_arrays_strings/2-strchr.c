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
	char *ptr;

	while (s[i] != '\0')
	{
		if (s[i] == c && c != ' ')
		{
			ptr = &s[i];
			return (ptr);
		} else
		{
			return NULL;
		}
	}
	return (0);
}
