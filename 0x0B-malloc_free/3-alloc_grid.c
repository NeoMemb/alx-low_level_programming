#include <stdio.h>
#include <stdlib.h>
/**
 **********/
int **alloc_grid(int width, int height)
{
	int **ptr1, i, j; 

	if (width<= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	ptr1 = (int**)malloc(sizeof(int*) * height);
	for (i = 0; i < height; i++)
	{
		ptr1[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < i; j++)
		{
			ptr1[i][j] = 0;
		}
	}
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	return (ptr1);
}
