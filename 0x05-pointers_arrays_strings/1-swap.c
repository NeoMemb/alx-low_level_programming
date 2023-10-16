#include "main.h"
/**
 * swap_int - swap two integers
 * @a: First type int pointer address
 * @b: Second type int pointer address
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;
	int var;

	tmp = *a;
	var = *b;
	*a = var;
	*b = tmp;
}
