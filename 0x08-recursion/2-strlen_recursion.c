#include "main.h"
/**
 * _strlen_recursion - print the length of a str
 * @s: char type data
 * Description: Using the recursion, to return 1
 * recursively for each string count
 *
 * Return: the number of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
