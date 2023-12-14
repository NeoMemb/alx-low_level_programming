#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two string
 * @s1: char type
 * @s2: char type
 * Description: s1 and s2 are to be concatenated
 * together, and the concatenated string is returned.
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by
 * the contents of s2, and null terminated
 * Return: char (concatenated string)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len, s2_len, tot_length, x, y;
	char *output;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
	}
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{
	}
	tot_length = s1_len + s2_len + 1;
	output = malloc(tot_length * sizeof(*output));
	for (x = 0; x < s1_len; x++)
	{
		output[x] = s1[x];
	}
	for (y = 0; y < s2_len; y++, x++)
	{
		output[x] = s2[y];
	}
	output[tot_length] = s2[y];
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}
	return (output);
}
