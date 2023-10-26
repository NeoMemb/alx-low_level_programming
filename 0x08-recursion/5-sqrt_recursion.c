#include "main.h"
/**
 * sqrt_recursion - helper fuction
 * @i: int data type
 * @j: int data type
 * Description: This helper function takes in two
 * arguement. If i * i = j, return j. if i * i
 * > j, returns -1.
 *
 * Return: int i
 */
int sqrt_recursion(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	return (sqrt_recursion(i + 1, j));
}
/**
 * _sqrt_recursion - returns square root
 * @n: data ype int
 * Description: This function uses an helper function
 * as it's return value.
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion(1, n));
}
