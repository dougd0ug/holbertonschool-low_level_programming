#include "main.h"
#include <stdio.h>

/**
 * search - to check a number x to n
 *@n: number base
 *@x: number to iterate
 *Return: if is prime number
 */

int search(int n, int x)
{
	x = 2;

	if ((n % x) == 0)
	{
		return (0);
	}
		return (1);
	return (search(n, x + 1));
}

/**
 * is_prime_number - return if is prime number
 *@n: number who's checked
 *Return: bool 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (search(n, 1));
}
