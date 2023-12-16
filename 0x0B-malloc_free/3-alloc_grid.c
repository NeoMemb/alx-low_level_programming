#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - is a double pointer funct
 * @width: int type
 * @height: int type
 * Description: width arg is size of the array
 * in 2D and height is the individual array
 * in the 2D array.
 *
 * Return: int double pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr1, i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	ptr1 = (int **)malloc(sizeof(int *) * height);
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr1[i] = (int *)malloc(sizeof(int *) * width);
		if (ptr1[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < i; j++)
		{
			ptr1[i][j] = 0;
		}
	}

	return (ptr1);
}
