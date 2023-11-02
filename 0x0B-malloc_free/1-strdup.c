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
	int i;
	char *s1;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	s1 = malloc(sizeof(char) * i);
	if (s1 == NULL)
	{
		printf(" ");
	}
	strcpy(s1, str);
	if (str == NULL)
	{
		return (NULL);
	}

	return (s1);
}
