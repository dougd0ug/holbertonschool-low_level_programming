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
	int nb1 = atoi(argv[1]);
	int nb2 = atoi(argv[2]);

	if (argc > 5 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}


	result = (nb1 * nb2);
	printf("%d\n", result);
	return (0);
}
