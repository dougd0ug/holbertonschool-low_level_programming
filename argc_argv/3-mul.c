#include "main.h"
#include <stdio.h>

/**
 *main - Entry
 *@argc: int
 *@argv: array
 *Return: squared root
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int result;

	if (argc > 3 || argc < 3)
	{
		printf("Error");
		return (1);
	}

	result = ((argc - 2) * (argc - 1));
	return (result);
}
