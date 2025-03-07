#include "main.h"
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

	if (argc > 3 || argc < 3)
	{
		printf("Error");
		return (1);
	}

	result = ((argv[2]) * (argv[3]));
	printf("%d\n", result);
	return (0);
}
