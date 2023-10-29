#include <stdio.h>
/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Description: The function prints
 * the arg passed to the command line
 *
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
