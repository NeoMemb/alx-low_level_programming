#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Copies the string pointed to by src.
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{

	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';

	return (dest);
}
