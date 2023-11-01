#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates string
 * @s1: char type
 * @s2: char type
 * Description: s1 and s2 are concatenated
 * together, and the concatenated string is returned.
 *
 * Return: char (concatenated string)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, tot_length, x, y;
	char *output;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	tot_length = i + j;
	output = malloc(tot_length + 1);
	for (x = 0; x < i; x++)
	{
		output[x] = s1[x];
	}
	for (y = 0; y < j; y++, x++)
	{
		output[x] = s2[y];
	}
	output[tot_length] = s2[y];
	if (output == NULL)
	{
		return (NULL);
	}

	return (output);
}
