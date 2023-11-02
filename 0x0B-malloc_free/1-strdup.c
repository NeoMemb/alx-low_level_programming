#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - prints the string
 * @str: char data type
 * Description: The str argument is printed.
 * If the string parameter is Null (empty),
 * it returns NULL
 *
 * Return: the string to-be printed
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s1;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	s1 = malloc(sizeof(char) * i + 1);
	if (s1 == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s1[j] = str[j];
	}
	s1[j] = '\0';
	if (str == NULL)
	{
		return (NULL);
	}

	return (s1);
}
