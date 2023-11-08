#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate over array
 * @array: pointer to array of int
 * @size: size_t data type
 * @action: pointer to a function
 * Description: parameter array is the
 * array to be iterated. size is the size
 * iteration reach. *(action) is the pointer to a function.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
