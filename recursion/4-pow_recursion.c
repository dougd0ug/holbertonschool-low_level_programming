#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Write a function that returns the value of x raised
 * to the power of y.
 * @x: digit we want to convert in factorial
 * @y: power number
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
