#include "main.h"
/**
 * _islower - Checking for lowercase letters
 * @c: The integer to be checked
 *
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
