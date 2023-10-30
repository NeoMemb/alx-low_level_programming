#include <stdio.h>
#include <stdlib.h>
/**
 ****/
int main(int argc, char **argv)
{
	int i, j, result;
	int array[] = {1, 2, 5, 10, 25};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
	}
	for (j = 0; i >= array[j]; j++)
	{
		result = i / array[j];
		if (i % array[j] != 0)
		{
			int m = i % array[j];
			result = result + m;
		}
	}	
	printf("%d\n", result);
	return (0);
}
