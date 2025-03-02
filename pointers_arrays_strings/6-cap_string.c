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
	char symb[14] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;
	int j;

	for (i = 0; l[i] != '\0'; i++)
	{
		if (l[i] >= 'a' && l[i] <= 'z')
		{
			for (j = 0; j < 14; j++)
			{
				if (l[i - 1] == symb[j])
				{
					l[i] = l[i] - 'a' + 'A';
				}
				j++;
			}
		}
	}
	return (l);
}
