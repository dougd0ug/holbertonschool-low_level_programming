#include "main.h"
#include <stdio.h>

/**
 * search - Recursion to find x
 * is_prime_number - Write a function that returns 1 if
 * the input integer is a prime number, otherwise return 0.
 * @n: digit we want the prime number
 * @x: find prime number
 * Return: Always 0
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

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}	
	return (search(n, 1));
}
