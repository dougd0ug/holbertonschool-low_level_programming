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
	
	if (argc < 3 || argc > 5)
	{
		printf("Error\n");
		return (1);
	}
	
	int nb1 = atoi(argv[1]);
	int nb2 = atoi(argv[2]);

	result = (nb1 * nb2);
	printf("%d\n", result);
	return (0);
}
