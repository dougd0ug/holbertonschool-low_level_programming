#include "main.h"

/**
 * string_toupper - changer lowercase to uppercase
 * @u: parameter we want to puts
 * parameter we want to switch
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *u)
{
	int i = 0;

	while (u[i] != '\0')
	{
		if (u[i] >= 'a' && u[i] <= 'z')
		{
			u[i] = u[i] - 'a' + 'A';
		}
	}
	return (u);
}
