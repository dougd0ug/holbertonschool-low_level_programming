#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calculate
 * @argc: number of arguments
 * @argv: arguments
 * Return: result
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error2\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && num2 == 0)
	{
		printf("Error3\n");
		exit(100);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (result);
}
