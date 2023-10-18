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
	char res;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		res = str[i];
		putchar(res);
	}
	putchar('\n');
}
