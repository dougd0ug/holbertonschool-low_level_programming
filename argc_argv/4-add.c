#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry
 *@argc: int
 *@argv: array
 *Return: squared root
 */

int main(int argc, char *argv[])
{
	int i, j;
	int result;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 0; i < argc; i++)
	{
		s = argv[i];
		for (j = 0; j < i; j++)
		{
			if (!isdigit(s[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(s);
	}
	printf("%d\n", result);
	return (0);
}
