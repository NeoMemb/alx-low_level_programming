#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition
 * @a: int data type
 * @b: int data type
 * Return: addition of a and b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: int data type
 * @b: int data type
 * Return: substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - division
 * @a: int data type
 * @b: int data type
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mul - multiplication
 * @a: int data type
 * @b: int data type
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - remainder
 * @a: int data type
 * @b: int data type
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
