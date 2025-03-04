#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Write a function that locates a substring
 * @a: string to be scanned
 * 
 * Return: Always 0
 */

 void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%p", &a[i][j]);
		}		
	}
}
