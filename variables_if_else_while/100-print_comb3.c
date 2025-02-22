#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int alph;
	int beta;

	for (alph = 0; alph < 90; alph++)
	{

		while ((alph / 10) ! (alph % 10))
		{
			putchar((alph / 10) + '0');
			putchar((alph % 10) + '0');
		}
		
		
	
		
		if (alph < 90)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
