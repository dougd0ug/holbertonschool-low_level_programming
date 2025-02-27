#include "main.h"

/**
 * _atoi - print half of a string
 * @s: parameter we want to puts
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s)
{
	int scan;

	for (scan = 0; s[scan]; scan++)
	{
		if (s[scan] >= 48 && s[scan] <= 57)
		{
			if (s[(scan - 1)] == 45)
			{
				return (45);
			}
			else
			{
				return (s[scan]);
			}
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
