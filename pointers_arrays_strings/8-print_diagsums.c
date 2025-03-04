#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the two diagonals
 * @a: string to be scanned
 * @size: size of diagonals
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int suma = 0;
	int sumb = 0;

	for (i = 0; i < size; i++)
	{
		suma += a[(i * size) + i];
		sumb += a[(i + 1)*(size - 1)];
	}
	printf("%d, %d\n", suma, sumb);
}
