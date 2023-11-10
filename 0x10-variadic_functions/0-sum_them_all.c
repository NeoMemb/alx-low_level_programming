#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum up all integer passed
 * @n: constant unsigned integers passed as argument
 *
 * Return: the sum of all argument integer
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list(list);
		unsigned int i, sum = 0;

		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);

		return (sum);
	}
	if (n == 0)
	{
		return (0);
	}
	return (0);
}
