#include <stdio.h>

/**
 * main - Entry point
 * Description: printing lowercase and uppercase alphabets a to z
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first;
	/*char lastCase = 'z';*/
	char firstCase;

	for (first = 'a'; first <= 'z'; first++)
	{
		putchar(first);
	}
	for (firstCase = 'A'; firstCase <= 'Z'; firstCase++)
	{
		putchar(firstCase);
	}
	putchar('\n');

	return (0);
}
