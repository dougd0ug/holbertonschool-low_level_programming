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

	if (argv[1] == NULL || argv[2] == NULL || argc > 2)
	{
		printf("Error");
		return (1);
	}

	result = ((argc - 2) * (argc - 1));
	return (result);
}
