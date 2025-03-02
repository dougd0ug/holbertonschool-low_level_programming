#include "main.h"

/**
 * leet - to capitalize after a symbol
 * @l: parameter we want to puts
 * parameter we want to switch
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *leet(char *l)
{
	char lettre[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int j;

	for (i = 0; l[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (l[i] == lettre[j])
			{
				l[i] = number[j];
			}
		}
	}
	return (l);
}
