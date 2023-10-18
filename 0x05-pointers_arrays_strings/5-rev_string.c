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
	char rev = s[0];
	int icount = 0;
	int i;

	while (s[icount] != '\0')
		icount++;

	for (i = 0; i < icount; i++)
	{
		icount--;
		rev = s[i];
		s[i] = s[icount];
		s[icount] = rev;
	}
}
