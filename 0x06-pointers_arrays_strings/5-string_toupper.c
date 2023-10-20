#include "main.h"

/**
 * string_toupper - Function that reverse the content of an array of int
 * @a: Type int
 * Return: string a
 */
char *string_toupper(char *a)
{
	int h;

	for (h = 0; a[h] != '\0'; h++)
	{
		if (a[h] > 96 && a[h] < 123)
		{
			a[h] -= 32;
		}
	}
	return (a);
}
