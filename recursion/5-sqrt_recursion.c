#include "main.h"
#include <stdio.h>

/**
 *search - find squared root
 *@n: number to find squared root
 *@x: squared root
 *Return: squared root
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

/**
 *_sqrt_recursion - return squared root
 *@n: number to find squared root
 *Return: squared root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (search(n, 1));
}
