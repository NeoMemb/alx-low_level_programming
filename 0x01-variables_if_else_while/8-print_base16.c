#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char zero = '0';
	char nine = '9';
	char alpha97 = 'a';
	char alpha102 = 'f';

	while (zero <= nine)
	{
		putchar(zero);
		zero++;
	}
	while (alpha97 <= alpha102)
	{
		putchar(alpha97);
		alpha97++;
	}
	putchar('\n');

	return (0);
}
