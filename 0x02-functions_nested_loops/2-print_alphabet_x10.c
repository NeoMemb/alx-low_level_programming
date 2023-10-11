#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char a = 'a';
		char z = 'z';

		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');

	}
}
