#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a;
	char z = 'z';

	for (a = 'a'; a <= z; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
