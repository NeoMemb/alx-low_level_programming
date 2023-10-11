#include "main.h"
/**
 * print_last_digit - Printing the last digit
 * @n: The number to be checked
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int res = (n % 10) / -1;

		_putchar(res + '0');
	}
	else
	{
		int resP = (n % 10);

		_putchar(resP + '0');
	}
	return (0);
}
