#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints the string and it's inverse
 * @s: type char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char res1;

	for (i = 0; s[i] != 0; i++)
	{
	}
	
	for(i = i - 1; i >= 0; i--)
	{
		res1 = s[i];
		putchar(res1);
	}
	for (j = 0; j >= i; j--)
	{
		printf("Good loop");
		i++;
		if (s[i] == '\0')
		{
			i++;
			res1 = s[i];
		}
	}

	putchar('\n');
}
