#include "main.h"
/**
 * print_most_numbers - Prints from 0 to 9
 *
 * Return: nothing (void)
 */
void print_most_numbers(void)
{
	char zero;

	for (zero = '0'; zero <= 57; zero++)
	{
		if (zero == '2' || zero == '4')
		{
			continue;
		}
		_putchar(zero);
	}
	_putchar('\n');
}
