#include "main.h"
/**
 * divisible - helping function
 * @i: int type
 * @j: int type
 * Description: This function return 0 for
 * when i is 1 and return 1 if j * j > i
 * and then recursively continue the return only
 * by j + 1.
 *
 * Return: 1 if true
 */
int divisible(int i, int j)
{
	if ((j * j == i) || (i < 0))
	{
		return (0);
	}
	if (j * j > i)
	{
		return (1);
	}
	return (divisible(i, (j + 1)));
}
/**
 * is_prime_number - checks for prime number
 * @n: int type
 * Description: This function uses the helping function
 * of divisible(i, j) but with arg (n, 0).
 *
 * Return: int based on the helping function
 */
int is_prime_number(int n)
{
	return (divisible(n, 0));
}
