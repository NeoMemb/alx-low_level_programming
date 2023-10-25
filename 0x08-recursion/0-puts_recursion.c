#include "main.h"
/**
 * _puts_recursion - print the char s
 * @s: the string type
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;
	char str;

	for (i = 0; s[i] != '\0'; i++)
	{
		str = s[i];
		_putchar(str);
	}
	_putchar('\n');
}
