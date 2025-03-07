#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry
 *@argc: int
 *@argv: array
 *Return: squared root
 */

int main(int argc, char *argv[])
{
	int result;
	int nba, nbb;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nba = atoi(argv[1]);
	nbb = atoi(argv[2]);

	result = (nba * nbb);
	printf("%d\n", result);
	return (0);
}
