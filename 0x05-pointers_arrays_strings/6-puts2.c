#include "main.h"
#include <stdio.h>
/**
 * puts2 - Return characters in evenly
 * @str: data type char
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
}
