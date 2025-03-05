#include "main.h"
#include <stdio.h>

/**
 * search - Recursion to find x
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number
 * @n: digit we want the natural root
 * @x: find natural root
 * Return: Always 0
 */

int search(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	} else if ((x * x) > n)
	{
		return (-1);
	}
	return (search(n, x + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (search(n, 1));
}
