#include "main.h"

/**
 * cap_string - to capitalize after a symbol
 * @l: parameter we want to puts
 * parameter we want to switch
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *cap_string(char *l)
{
	char symb[14] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;
	int j = 0;

	for (i = 0; l[i] != '\0'; i++)
	{
		if (l[i] >= 'a' && l[i] <= 'z')
		{
			while (j < 14)
			{
				if (s[i - 1] == symb[i])
				{
					s[i] = s[i] - 'a' + 'A';
				}
				j++;
			}
		}
	}
	return (s);
}
