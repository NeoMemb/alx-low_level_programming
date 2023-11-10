#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints the number
 * @separator: char data type
 * @n: unsigned int data type
 * Description: n is the number of integer passed
 * to as argument. separator is the the string
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(others);
	unsigned int i;

	va_start(others, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(others, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(others);
	printf("\n");
}
