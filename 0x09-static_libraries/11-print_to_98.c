#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints all natural numbers from n to 98, followed by a newline.
 *@n: The commencing number
 */
void print_to_98(int n)
{
	int j;

	if (n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");
}
