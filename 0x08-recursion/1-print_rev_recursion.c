#include "main.h"

/**
 * 1-print_rev_recursion.c - a function that prints a string in reverse.
 * @s: string
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
