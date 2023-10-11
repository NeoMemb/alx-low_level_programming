#include "main.h"
/**
 * _isalpha - Checking for any letter
 * @c: The value to be determine
 *
 * Return: void
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
