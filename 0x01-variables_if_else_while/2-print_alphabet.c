#include <stdio.h>
/**
  * main - Entry point
  * Description: printing all lowercase alphabets using putchar.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char a;
	char z = 'z';

	for (a = 'a'; a <= z; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return 0;
}
