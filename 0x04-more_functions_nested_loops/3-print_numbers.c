#include "main.h"
/**
 * print_numbers - Prints from 0 to 9
 *
 * Return: nothing (void)
 */
void print_numbers(void)
{
	char zero;

	zero = '0';
	while (zero <= 57)
	{
		_putchar(zero);
		zero++;
	}
	_putchar('\n');
}
