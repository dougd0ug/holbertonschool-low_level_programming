#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	for (char alph = 'a'; alph <= 'z' && alph !'e' && alph !'q'; alph++)
	{
		putchar(alph);
	}

}
