#include <stdio.h>
/**
 * main - print arg received
 * @argc: int data type
 * @argv: char data type
 * Description: Printing each arg in the command
 * line with a new line
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
