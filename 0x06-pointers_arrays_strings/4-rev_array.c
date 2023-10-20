#include "main.h"

/**
 * reverse_array - Function that reverse the content of an array of int
 * @a: Type int
 * @n: Type int
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
