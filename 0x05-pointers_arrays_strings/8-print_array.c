#include "main.h"
#include<stdio.h>
/**
 * print_array - print given array
 * @a:name of the array
 * @n:numbers of values of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int N;

	N = 0;
	while (N < n)
	{
		if (N > 0)
		{
			printf(", ");
		}
		printf("%d", a[N]);
		N++;
	}
	printf("\n");
}
