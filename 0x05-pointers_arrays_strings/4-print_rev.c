#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string backward
 * @s: char type parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	char rev;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		rev = s[i];
		putchar(rev);
	}
	putchar('\n');
}
