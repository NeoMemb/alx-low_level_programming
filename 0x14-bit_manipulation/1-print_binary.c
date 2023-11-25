#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary format
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int rev, count;

	rev = count = 0;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		rev = rev << 1;
		rev += n & 1;
		count++;
		n = n >> 1;
	}

	while (rev > 0)
	{
		_putchar((rev & 1) + '0');
		rev = rev >> 1;
		count--;
	}

	if (count > 0)
	{
		while (count != 0)
		{
			_putchar('0');
			count--;
		}
	}
}
