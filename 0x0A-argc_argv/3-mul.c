#include <stdio.h>
#include <stdlib.h>
/**
 *********/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		int mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
