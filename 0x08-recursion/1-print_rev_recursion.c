#include "main.h"
/**
 * _print_rev_recursion - print a string backwardly
 * @s: string type data
 * Description: prints a string backwardly
 * followed by a new line
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
