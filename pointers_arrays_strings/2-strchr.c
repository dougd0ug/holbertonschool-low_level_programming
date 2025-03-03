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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		} else
		{
			return NULL;
		}
	}
	return (0);
}
