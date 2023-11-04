#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creating array of some range
 * @min: int data type
 * @max: int data type
 * Description: Function creates array from
 * min to max. and returns NULL, if the min is
 * larger than the max.
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;

	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc((max -min + 1) * sizeof(int));
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + 1;
	}
	return (ptr);
}
