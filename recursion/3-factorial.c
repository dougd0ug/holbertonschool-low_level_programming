#include "main.h"
#include <stdio.h>

/**
 * factorial - Write a function that returns the factorial
 * @n: digit we want to convert in factorial
 *
 * Return: Always 0
 */

int factorial(int n)
{
	if (n = 1)
	{
		return (1);
	} else if (n < 1)
	{
		return (-1);
	}	
	return (n * factorial(n - 1));
}
