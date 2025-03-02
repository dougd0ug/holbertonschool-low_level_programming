#include "main.h"

/**
 * leet - change letters to digits
 * @l: parameter we want to puts
 * Return: On success 1.
 */

char *leet(char *l)
{
	int i;
	int j;
	char lettre[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; l[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (l[i] == lettre[j])
				l[i] = number[j];
		}
	}
	return (l);
}
