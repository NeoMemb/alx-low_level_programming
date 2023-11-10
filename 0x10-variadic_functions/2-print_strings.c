#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints str 
 * @separator: char data type
 * @n: unsigned int data type
 * Description: n is the number of string passed
 * to as argument. separator is the the string
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(others);
	unsigned int i;
	char *str;

	va_start(others, n);
	for (i = 0; i < n; i++)
	{
		str =  va_arg(others, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(others);
	printf("\n");
}
