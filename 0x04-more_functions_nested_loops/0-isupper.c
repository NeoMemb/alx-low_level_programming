#include "main.h"
/**
 * _isupper - Checks if a character is in uppercase
 * @c: the character to be checked
 * Return: 1 if true, 0, false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
