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
	int i;
	int result;

	for (i = 0; argv[i]; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
		}
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		} else
		{
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
