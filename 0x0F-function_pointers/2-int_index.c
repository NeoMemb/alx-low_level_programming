#include <stdio.h>
/**
 * int_index - return index of element
 * @array: pointer to int data type
 * @size: data type
 * @cmp: pointer to function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
