#include "main.h"
/**
 * _pow_recursion - x raised to the power of y
 * @x: int type data
 * @y: int data type
 * Description: This function returns the given
 * power of a given number
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
