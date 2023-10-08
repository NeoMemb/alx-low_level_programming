#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		putchar(numb);
		if (numb != 57)
		{
			
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
