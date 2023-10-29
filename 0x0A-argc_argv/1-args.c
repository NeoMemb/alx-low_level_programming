#include <stdio.h>
/**
 * main - printing number arg received
 * @argc: int data type
 * @argv: char data type
 * Description: Printing number of arg
 * in the command line after the first arg
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
