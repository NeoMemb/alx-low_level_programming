#include <stdio.h>
/**
 * print_name - prints name
 * @name: char data type
 * @(*f): pointer to a function
 * Description: name is the name to be printed
 * . *f is the function plugged in it
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
