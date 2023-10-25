#include "main.h"
/**
 * factorial - mathematical factorial
 * @n: int data type
 * Description: The function return the value of n *
 * the value of the factorial of n (recursively)
 *
 * Return: n * factorial(n - 1)
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
