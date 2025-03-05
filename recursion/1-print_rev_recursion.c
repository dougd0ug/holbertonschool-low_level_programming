#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 * @s: string we want to puts
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')  // Condition d'arrêt : si on atteint le caractère nul
    {
        _putchar('\n');  // Affiche un saut de ligne quand la chaîne est terminée
        return ;  // Fin de la récursion
    }

	_print_rev_recursion(s + 1);  
	_putchar(*s);
}
