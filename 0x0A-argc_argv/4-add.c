#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add any two int
 * @argc: int data type
 * @argv: char data type
 * Description: after the first arg on the
 * comnand line, if there are two numbers
 * after it, it prints their addition
 * if there is no number, it prints Error
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum, digit, j;

	sum = 0;
	if (argc < 3)
	{
		printf("0\n");
	}
	for (i = 1; argv[i] != NULL; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]) && argv[i][j] != '-')
			{
				printf("Error\n");
				return (1);
			}
		}
		digit = atoi(argv[i]);
		sum += digit;
	}
	printf("%d\n", sum);
	return (0);
}
