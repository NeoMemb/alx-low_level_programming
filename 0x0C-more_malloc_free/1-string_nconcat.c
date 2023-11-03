#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - catenate two strings
 * @s1: char type of first string
 * @s2: char type of second string
 * @n: unsigned int data type
 * Description: s1 and s2 is concatenated such that
 * string s2 of n chars are catenated with s1.
 * The catenated strings are then returned
 *
 * Return: char *ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b;

	a = (s1 != NULL) ? strlen(s1) : 0;
	b = (s2 != NULL) ? strlen(s2) : 0;

	if (n >= b)
	{
		n = b;
	}
	ptr = malloc( a + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(ptr, s1);
	}
	else
	{
		ptr[0] = '\0';
	}
	strncat(ptr, s2, n);
	return (ptr);
}
