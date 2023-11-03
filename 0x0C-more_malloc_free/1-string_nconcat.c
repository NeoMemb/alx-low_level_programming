#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i, j;
	char *ptr;
	unsigned int a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n == 0)
	{
		return (NULL);
	}
	/*Length of two strings; s1 and s2 = i and j*/
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	ptr = malloc(i + j + 1);
	for (a = 0; s1[a] != '\0'; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < n; b++, a++)
	{
		ptr[a] = s2[b];
	}
	ptr[a] = '\0';

	return (ptr);
}
