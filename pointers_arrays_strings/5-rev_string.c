#include "main.h"

/**
 * rev_string - Entry
 * @s: parameter we want to puts
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{
	int length;
	int rev;
	char string;

	for (length = 0; s[length]; length++)
	{
	}

	length--;

	for (rev = 0; rev < length; rev++)
	{
		string = s[rev];
		s[rev] = s[length];
		s[length] = string;
	}
}
