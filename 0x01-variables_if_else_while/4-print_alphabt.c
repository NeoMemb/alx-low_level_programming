#include <stdio.h>
/**
  * main - Entry point
  * Description: putcharing all lowercase alphabets except 'e' and 'q'.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char a;
	char z = 'z';

	for (a = 'a'; a <= z; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
