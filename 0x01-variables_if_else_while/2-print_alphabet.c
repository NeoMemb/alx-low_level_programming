#include <stdio.h>

/**
 * main - Entry point
 * lowercase alphabets from a to z (97 to 122)
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first = 'a';
	char last = 'z';

	while (first <= last)
	{
		putchar(first);
		first++;
	}
	putchar('\n');

	return (0);
}
