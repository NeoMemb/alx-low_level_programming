#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the second half of a str
 * @str: char type parameter
 * Return:0
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a])
	{
		a++;
	}
	a--;
	b = a / 2;
	a = 0;
	while (str[a])
	{
		if (a > b)
		{
			putchar(str[a]);
		}
		a++;
	}
	putchar('\n');
}
