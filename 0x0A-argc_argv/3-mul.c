#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply any two int
 * @argc: int data type
 * @argv: char data type
 * Description: after the first arg on the
 * comnand line, if there are two numbers
 * after it, it prints their multiplication
 * if there is no number, it prints Error
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i;
		int j;
		int mul;

		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
