#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i == 100)
			{
				continue;
			}
			putchar(' ');
		} else if ((i % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		} else if (i < 100)
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
