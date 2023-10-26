#include "main.h"
/**
 * sqrt_recursion - helper fuction
 * @n: int data type
 * @low: int data type
 * @high: int data type
 * Description: This helper function takes in three
 * arguement. if @low is less or equal to @high
 * , @mid var is created and if the square of mid is
 * equal to tge square of @n(the square root we are
 * looking for), it return @mid.
 *
 * Return: int mid or recursionly mid
 */
int sqrt_recursion(int n, int low, int high)
{
	if (low <= high)
	{
		int mid = low + (high - low) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (sqrt_recursion(n, mid + 1, high));
		}
		else
		{
			return (sqrt_recursion(n, low, mid - 1));
		}
	}
	return (-1);
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
	return (sqrt_recursion(n, 1, n));
}
