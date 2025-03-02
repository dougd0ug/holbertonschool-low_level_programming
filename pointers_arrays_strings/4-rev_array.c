#include "main.h"

/**
 * reverse_array - Write a function that reverses the content
 * @a: parameter we want to puts
 * @n: parameter we want to switch
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int rev;

	for (j = n; i <= j; j--)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		i++;
	}
}
