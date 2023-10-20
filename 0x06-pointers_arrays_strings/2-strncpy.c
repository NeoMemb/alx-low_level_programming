#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Function that copies a string.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;

	while (i != n)
	{
		dest[i] = src[j];

		if (src[i] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		i++;
		j++;
	}
	while (j != n)
		dest[j++] = '\0';

	return (dest);
}
